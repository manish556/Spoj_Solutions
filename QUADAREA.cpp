#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    double a,b,c,d,s,area;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        s=(a+b+c+d)/2;
        area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n",area);
    }
    return 0;
}
