# include <iostream>
# include <math.h>
using namespace std;

int main()
{
    int t,n;
    long long int rem;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        rem=0;
        cin>>n;
        long long int A[n];
        for(int j=0;j<n;j++)
        {
            cin>>A[j];
            rem=fmod(rem+A[j],n);
        }
        if(rem==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
  return 0;
}
