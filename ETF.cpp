#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int pn(int n)
{
    int res=n;
    for (int p=2;p*p<=n;p++)
    {
        if (n%p==0)
        {
            while (n%p==0)
                n/=p;
            res-=res/p;
        }
    }
    if (n>1)
        res-=res/n;
    return res;
}
int main()
{
  int t,n,ph;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      scanf("%d",&n);
      ph=pn(n);
      printf("%d\n",ph);
  }
  return 0;
}
