#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    unsigned long long int r;
    double s;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r;
        s=4*r*r+0.25;
        printf("Case %d: %.2lf\n",i,s);
    }
    return 0;
}
