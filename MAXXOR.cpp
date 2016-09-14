#include <iostream>
#include <math.h>
using namespace std;

int con(int A[],int a)
{
    int i=0;
    while(a)
    {
        A[++i]=a%2;
        a=a/2;
    }
    return i;
}
int main()
{
    long long int a,b,c;
    int A[31],B[31];
    cin>>a>>b;
    int i=con(A,a);
    int j=con(B,b);
    if(j>i)
    {
        c=pow(2,j)-1;
    }
    else
    {   int x;
        for(x=i;x>=0;x--)
       {
        if(A[x]!=B[x])
          break;
       }
       if(x==1)
        c=0;
       else
        c=pow(2,x)-1;
    }
    cout<<c;
    return 0;
}
