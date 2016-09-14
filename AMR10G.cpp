#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,k,min;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&n,&k);
        int A[n];
        for(int j=0;j<n;j++)
            scanf("%d",&A[j]);
        sort(A,A+n);
        min=A[n-1]-A[0]+1;
        for(int j=0;j<=n-k;j++)
        {
            if(A[j+k-1]-A[j]<min)
                min=A[j+k-1]-A[j];
        }
        printf("%d\n",min);
    }
    return 0;
}
