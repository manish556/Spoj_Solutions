#include<iostream>

using namespace std;

int main()
{
    int t,m;
    short n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
     cin>>m>>n;
     if(n==0)
            cout<<"Airborne wins.\n";
     else
        cout<<"Pagfloyd wins.\n";
    }


    return 0;
}
