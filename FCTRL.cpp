#include <iostream>

using namespace std;

int main()
{
 int t,n,s;
 cin>>t;
 for(int i=0;i<t;i++)
 {
     cin>>n;
     s=0;
     while(n)
     {
         n=n/5;
         s=s+n;
     }
     cout<<s<<endl;
 }
    return 0;
}
