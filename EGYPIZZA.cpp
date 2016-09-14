#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char A[4];
    int t,a=0,b=0,c=0,counter=1;
    cin>>t;
    for(int i=0;i<t;i++)
     {
         cin>>A;
         if(strcmp(A,"1/4")==0)
            a++;
         else if(strcmp(A,"1/2")==0)
            b++;
         else
            c++;
     }
     counter+=c;
      a-=c;
     if(b%2==0)
         counter+=(b/2);
     else
     {
         counter+=(b/2+1);
         a-=2;
     }
      if(a>0)
      {
          if(a%4==0)
            counter+=a/4;
          else
            counter+=(a/4+1);
          cout<<counter<<endl;
      }
       else
        cout<<counter<<endl;
    return 0;
}
