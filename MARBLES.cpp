#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    unsigned long long int s;
    int t,n,k,mx;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&n,&k);
        if(n==k)
            printf("1\n");
        else
        {   s=1;
            mx=max(n-k,k-1);
            unsigned long long int g=1;
            for(unsigned long long int j=n-1;j>mx;j--)
            {
                s=s*j/g;
                ++g;
            }
            printf("%lld\n",s);
        }
     }
    return 0;
}
