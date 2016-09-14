#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i,temp;
    cin>>n;
    for(i=1;i<250;i++)
    {   temp=0;
        while(n)
        {
            temp=temp+pow(n%10,2);
            n=n/10;
        }
        n=temp;
        if(n==1)
            break;
    }
    if(n==1)
        cout<<i<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
