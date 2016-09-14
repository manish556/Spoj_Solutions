#include<iostream>
using namespace std;

int hcf(int a,int b)
{
    if(b==0)
        return a;
    else
        a=hcf(b,a%b);
    return a;
}
int main()
{
    int t,a,b,hc;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        hc=hcf(a,b);
        cout<<b/hc<<" "<<a/hc<<endl;
    }
  return 0;
}
