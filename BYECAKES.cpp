#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,d,a2,b2,c2,d2;
    int A[4];
    while(1)
    {

        cin>>a>>b>>c>>d>>a2>>b2>>c2>>d2;
        if(a==-1)
            break;
        else
        {
            A[0]=(int)ceil((float)a/(float)a2);
            A[1]=(int)ceil((float)b/(float)b2);
            A[2]=(int)ceil((float)c/(float)c2);
            A[3]=(int)ceil((float)d/(float)d2);
            int num=-1;


            for(int i=0;i<4;i++)
             if(A[i]>num)
              num=A[i];

            cout<<a2*num-a<<" "<<b2*num-b<<" "<<c2*num-c<<" "<<d2*num-d<<endl;
        }
    }
    return 0;
}
