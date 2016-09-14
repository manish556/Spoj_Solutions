#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
    int t,a,b,min;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        min=2000001;
        scanf("%d",&a);
        int A[a];
        for(int j=0;j<a;j++)
            scanf("%d",&A[j]);
        scanf("%d",&b);
        int B[b];
        for(int j=0;j<b;j++)
            scanf("%d",&B[j]);
        for(int m=0;m<a;m++)
        {
            for(int n=0;n<b;n++)
            {
                if(abs(A[m]-B[n])<min)
                  min=abs(A[m]-B[n]);
            }
        }
        printf("%d\n",min);
    }

    return 0;
}
