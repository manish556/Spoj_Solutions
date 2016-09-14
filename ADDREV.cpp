#include <iostream>

using namespace std;

int main()
{
  int t,r1,r2,r3;
  cin>>t;
  int A[t],Ar[t];
  int B[t],Br[t];
  int S[t],Sr[t];
  for(int i=0;i<t;i++)
  {
      cin>>A[i]>>B[i];
  }
    for(int i=0;i<t;i++)
    {
        Ar[i]=0;
        Br[i]=0;
        Sr[i]=0;
        while(A[i]!=0)
        {
          r1=A[i]%10;
          A[i]=A[i]/10;
          Ar[i]=Ar[i]*10+r1;
        }
        while(B[i]!=0)
        {
            r2=B[i]%10;
            B[i]=B[i]/10;
            Br[i]=Br[i]*10+r2;
        }
     S[i]=Ar[i]+Br[i];
      while(S[i]!=0)
      {
          r3=S[i]%10;
          S[i]=S[i]/10;
          Sr[i]=Sr[i]*10+r3;
      }
      cout<<Sr[i]<<endl;
    }
    return 0;
}
