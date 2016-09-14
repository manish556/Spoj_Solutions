#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,s,need,flag;

    cin>>t;
    for(int i=0;i<t;i++)
    {   flag=0;
        cin>>need>>n;
        int A[n];
        for(int j=0;j<n;j++)
            cin>>A[j];
        sort(A,A+n);
        s=0;
        int k;
        for(k=n-1;k>=0;k--)
        {
            s=s+A[k];
            if(s>=need)
            {
                flag=1;
                break;
            }
        }
        cout<<"Scenario #"<<i+1<<":"<<endl;
        if(flag==1)
            cout<<n-k<<endl<<endl;
        else
            cout<<"impossible"<<endl<<endl;
    }

    return 0;
}
