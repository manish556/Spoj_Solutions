#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==0&&b==0)
            break;
        else
        {
           int A[a],B[b];
           for(int i=0;i<a;i++)
            cin>>A[i];
           for(int i=0;i<b;i++)
            cin>>B[i];
           sort(A,A+a);
           sort(B,B+b);
           if(A[0]<B[1])
            cout<<'Y'<<endl;
           else
            cout<<'N'<<endl;
        }
    }
    return 0;
}
