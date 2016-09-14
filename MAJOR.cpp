#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,flag,flag2;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        flag2=-1;
        scanf("%d",&n);
        int A[2001];
        for(int j=0;j<2001;j++)
            A[j]=0;
        for(int j=0;j<n;j++)
        {
           scanf("%d",&flag);
           if(flag<0)
            A[1000-flag]++;
           else
            A[flag]++;
        }
      for(int j=0;j<2001;j++)
      {
          if(A[j]>n/2)
            flag2=j;
      }
      if(flag2==-1)
        printf("NO\n");
      else
      {
          if(flag2>1000)
             printf("YES %d\n",-(flag2-1000));
          //  cout<<-(flag-1000)<<endl;
          else
             printf("YES %d\n",flag2);
      }
    }
    return 0;
}
