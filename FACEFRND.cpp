#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int A[t][102],B[10000],C[10000];
    for(int i=0;i<t;i++)
    {
        cin>>A[i][1]>>A[i][0];
         for(int j=2;j<A[i][0]+2;j++)
            {
                cin>>A[i][j];
                B[A[i][j]]=0;
            }
    }
    for(int i=0;i<t;i++)
       B[A[i][1]]=1;
    int counter=0;
    for(int i=0;i<t;i++)
    {
         for(int j=2;j<A[i][0]+2;j++)
         {
             if(B[A[i][j]]==0)
             {
                 counter++;
                 B[A[i][j]]=1;
             }
         }
    }
    cout<<counter<<endl;
    return 0;
}
