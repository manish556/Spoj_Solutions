#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int row,A[100000][3];
long long int dp[100000][3];
int main()
{
    int t=0;
   while(1)
    {
        scanf("%d",&row);
        if(row==0)
            break;
        else
        {
            t++;
           for(int i=0;i<row;i++)
                for(int j=0;j<3;j++)
                  scanf("%d",&A[i][j]);
           dp[0][1]=A[0][1];
           dp[0][2]=A[0][2]+A[0][1];
           dp[1][0]=A[1][0]+A[0][1];
           dp[1][1]=A[1][1]+min(min(dp[1][0],dp[0][1]),dp[0][2]);
           dp[1][2]=A[1][2]+min(min(dp[0][1],dp[0][2]),dp[1][1]);
           for(int i=2;i<row;i++)
           {
               dp[i][0]=A[i][0]+min(dp[i-1][0],dp[i-1][1]);
               dp[i][1]=A[i][1]+min(min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]),dp[i][0]);
               dp[i][2]=A[i][2]+min(min(dp[i-1][1],dp[i-1][2]),dp[i][1]);
           }
           printf("%d. %lld\n",t,dp[row-1][1]);
        }
    }
  return 0;
}
