#include<iostream>
using namespace std;

int main()
{
    int t;
    long long x,y,z,d,n,f;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        n=2*z/(x+y);
        cout<<n<<endl;
        d=(y-x)/(n-5);
        f=x-(2*d);
        for(int i=0;i<n;i++)
            cout<<f+(i*d)<<" ";
        cout<<endl;
    }
}
