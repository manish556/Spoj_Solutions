#include <iostream>

using namespace std;

int main()
{
    int t,n,rem,temp;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        rem=n%3;
        switch (rem)
        {
           case 1:
            temp=n-10; break;
           case 2:
            temp=n-5; break;
           default:
            temp=n-15; break;
        }
           if(temp>0)
             cout<<"Case "<<i<<": "<<temp<<endl;
           else
            cout<<"Case "<<i<<": "<<-1<<endl;
    }
    return 0;
}
