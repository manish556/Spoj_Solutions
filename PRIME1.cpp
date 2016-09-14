#include <iostream>
#include <math.h>
using namespace std;
inline int prm(int n)
 {
     if (n==2)
        return 1;
     int flag=0;
     for (int s=2;s<=n/2+1;s++)
        if(n%s==0)
         {
           flag=1; break;
         }
     if (flag==0&&n!=1)
       {
        return 1;
       }
     else return 0;
 }
int main()
{
    int t;
    cin>>t;
    int A[t],B[t];
    for(int f=0;f<t;f++)
        cin>>A[f]>>B[f];
    for(int h=0;h<t;h++)
    {

    // int a,b;
    // cin>>a>>b;
      int x=sqrt(B[h])/1;
      int pupr[x];
    int z=0;
    for(int i=2;i<sqrt(B[h]);i++)
       {
          if(prm(i)==1)
          pupr[z++]=i;
       }
         for (int j=A[h];j<=B[h];j++)
        {
            int flagg=0;
            for (int k=0;k<z;k++)
             {
               if(j%pupr[k]==0&&j>pupr[k])
                 { flagg=1; break; }
             }
            if((flagg==0)&&(j!=1))
            cout<<j<<"\n";
        }
    cout<<"\n";
    }
}
