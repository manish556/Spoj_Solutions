#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    long long int n,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        s=3*n*(n+1)/2;
        s=fmod(s-n,1000007);
        cout<<s<<endl;
    }
    return 0;
}
