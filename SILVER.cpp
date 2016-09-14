#include<iostream>

using namespace std;

int main()
{
int n;
while(1)
{
    cin>>n;
    if(n==0)
        break;
    else
    {
        int cnt=0;
        while(n>1)
        {
            n/=2;
            cnt++;
        }
     cout<<cnt<<endl;
    }
}
    return 0;
}
