#include <iostream>
#include<string.h>

using namespace std;

int main()
{
 char B[200];
 char A[100][20];
 int flag,n=1;
 while (n!=0)
 {
    cin>>n;
    flag=0;
    if(n!=0)
    {
        cin>>B;
        for(int i=0;i<strlen(B);i=i+n)
        {
            if(flag%2==0)
            {
                for(int k=0;k<n;k++)
                 A[flag][k]=B[i+k];
                   flag++;
            }
            else
              {
                   for(int k=n-1;k>=0;k--)
                   A[flag][k]=B[i+n-1-k];
                   flag++;
              }
        }
        for(int k=0;k<n;k++)
        {
            for(int l=0;l<flag;l++)
                cout<<A[l][k];
        }
        cout<<endl;
    }
    else
     continue;
 }

    return 0;
}
