#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int x,y,n,m,min_e,rem_e;
    cin>>n>>m;
    cin>>x>>y;
    int dp[n+1][m+1];
    int A[n+1][m+1];



    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
         cin>>A[i][j];

    dp[n][m]=A[n][m];

    for(int i=m-1;i>=y;i--)
        dp[n][i]=A[n][i]+dp[n][i+1];

    for(int i=n-1;i>=x;i--)
        dp[i][m]=A[i][m]+dp[i+1][m];

    for(int i=n-1;i>=x;i--)
        for(int j=m-1;j>=y;j--)
            dp[i][j]=A[i][j]+min(dp[i+1][j],dp[i][j+1]);

    min_e = dp[x][y] - A[x][y];
    rem_e = A[x][y] - min_e;

    if(rem_e<0)
      cout<<"N\n";
    else
      cout<<"Y "<<rem_e<<endl;

    return 0;
}
