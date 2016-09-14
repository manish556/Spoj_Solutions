#include <iostream>

using namespace std;

int main()
{
    int t;
    unsigned long long int n,s;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>n;
        s=n*(n+1)*(n+2)/6;
        if(n%2==0)
        {
           s=s+(s-(n/2)*(n/2+1))/2;
        }
        else
           s=s+(s-(n+1)*(n+1)/4)/2;
        cout<<s<<endl;
    }
    return 0;
}
