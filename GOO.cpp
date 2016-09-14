#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int test,bit;
    unsigned long long int total,total2;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>bit;
       // if(bit==1)
       //     cout<<1<<endl<<1<<endl;
      //  else
        {
        total = pow(2,bit-1);
        total2 = (total*(bit+1)/2);
        cout<<total<<endl<<total2<<endl;
        }

    }


    return 0;
}
