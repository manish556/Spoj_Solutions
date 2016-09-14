#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int t;
    long long int n;
    cin>>t;
    ++t;
    for(int i=1;i<t;++i)
    {
        cin>>n;
        if(n%2)
         {
            printf("Case %d: %lld\n",i,n);
         }
        else
        {
            while(!(n%2))
                n/=2;
            printf("Case %d: %lld\n",i,n);
        }
    }

    return 0;
}
