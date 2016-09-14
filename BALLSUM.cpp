#include <iostream>
# define ll long long int
using namespace std;

ll hcf(ll a,ll b)
{
    if(b==0)
        return a;
    return hcf(b,a%b);
}
int main()
{
    ll n,k,a,b,hc;
    cin>>n>>k;

    while (n!=-1||k!=-1)
    {


       if(k%2==0)
       {
         a=(k-2)*(k)/2;
         b=n*(n-1);
       }
      else
       {
          a=(k-1)*(k-1)/2;
          b=n*(n-1) ;

       }

       hc=hcf(a,b);
      if (hc)
      {
       a/=hc;
       b/=hc;
      }
       if(a==0)
        cout<<0<<endl;
       else if(a==b)
        cout<<1<<endl;
       else
       cout<<a<<"/"<<b<<endl;

       cin>>n>>k;
    }

    return 0;
}
