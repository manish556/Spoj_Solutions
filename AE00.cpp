#include <iostream>

using namespace std;

int main()
{
int n,s=0;
   cin>>n;
   if(n==1)
   s=1;
   else
   for(int i=1;i<=n/2;i++)
   {
       for(int j=i;j<=n/i;j++)
        if(i*j<=n)
          s++;
   }
   cout<<s;
    return 0;
}
