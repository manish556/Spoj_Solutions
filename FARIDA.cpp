#include<iostream>
#include<stdio.h>
using namespace std;
int n,A[100001];
long long int dp[10000+5];
long long int fn(int a)
{
    if(a>=n)
        return 0;
    if(dp[a]!=-1)
        return dp[a];
    long long int s=A[a];
    s=s+max(fn(a+2),fn(a+3));
    dp[a]=s;
    return s;
}
int main()
{
    long long int coin;
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            dp[j]=-1;
            scanf("%d",&A[j]);
        }
        coin=max(fn(0),fn(1));
       // cout<<"Case "<<i+1<<": "<<coin<<endl;
       printf("Case %d: %lld\n",i+1,coin);
    }
 return 0;
}
