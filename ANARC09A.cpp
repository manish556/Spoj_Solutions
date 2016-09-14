#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t,len,flag,ans,num=0;
    char A[2001];
    while(1)
    {
        cin>>A;
        if(A[0]=='-')
            break;
        else
        {  num++;
           flag=0;
           ans=0;
           len=strlen(A);
           for(int i=0;i<len;i++)
           {
               if(A[i]=='{')
                 flag++;
               else
               {
                   if(flag>0)
                     flag--;
                   else
                   {
                       flag++;
                       ans++;
                   }
               }
           }
           ans=ans+flag/2;
        }
        cout<<num<<". "<<ans<<endl;
    }
    return 0;
}
