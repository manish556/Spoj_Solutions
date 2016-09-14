#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    cin>>k;
    int mx=A[0];
    for(int i=1;i<k;i++)
        if(A[i]>mx)
            mx=A[i];
    cout<<mx;
    for(int i=k;i<n;i++)
    {
       if(A[i]>=mx)
       {
         mx=A[i];
       }
       else if(mx>A[i-k])
         {

         }
       else
       {
           mx=A[i-k+1];
           for(int m=i-k+2;m<=i;m++)
            if(A[m]>mx)
              mx=A[m];
       }
           cout<<" "<<mx;
    }
    cout<<endl;
    return 0;
}
