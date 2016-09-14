#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,frnt=0;
    long long int m,s=0,mx=0;
    scanf("%d%lld",&n,&m);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(int last=0;last<n;last++)
    {
        s+=A[last];
        if(s>m)
        {
            while(s>m)
                s-=A[frnt++];
        }
        if((m-s)<(m-mx))
            mx=s;
    }
    printf("%lld",mx);
    return 0;
}
