#include<iostream>

using namespace std;

int main()
{
    int flag;
    long long int n;
        cin>>n;
        if(n%10==0)
            flag=0;
        else
            flag=1;
        if(flag==1)
        {
            cout<<1<<endl;
            cout<<n%10<<endl;
        }
        else
          cout<<2<<endl;

    return 0;
}
