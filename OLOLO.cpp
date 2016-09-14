#include<algorithm>
#include<stdio.h>
using namespace std;
int n,flag=0,A[500000];
int main()
{
    scanf("%d",&n);

    for(int i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    sort(A,A+n);
    for(int i=1;i<n;i=i+2)
    {
        if(A[i]!=A[i-1])
        {
            printf("%d",A[i-1]);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d",A[n-1]);
    return 0;
}
