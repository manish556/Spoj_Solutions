#include <iostream>

using namespace std;

int main()
{
 int n=1;
while(n!=0)
    {
     cin>>n;
     if(n!=0)
        {
            cout<<(n*(n+1)*(2*n+1)/6)<<endl;
        }
     else
        n=0;
 }

    return 0;
}
