#include <iostream>
using namespace std;

int main()
{
    int t,n,m,d,flag;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        flag=0;
        cin>>n>>m>>d;
        int A[n];
        for(int j=0;j<n;j++)
          {
            cin>>A[j];
          }
        for(int j=0;j<n;j++)
           {
            if((int)A[j]/d<(float)A[j]/d)
                flag+=(int)A[j]/d;
            else
                flag+=A[j]/d-1;
            if(flag>=m)
                break;
           }
        if(flag>=m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
