#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

#define MOD 1000000007

char A[100005],B[100005];

int main()
{
    int ans;
    int j,len,t,i,flag;
    cin>>t;
    ++t;
    char ch1,ch2,mx;
    for(j=1;j<t;j++)
    {
        ans=0;
        cin>>A>>B;
        flag=strcmp(A,B);
        if(flag==0)
        {
        	i=-1;
            while(A[++i]!='\0')
                ans=((ans<<1)+(A[i]-'0'))%MOD;
        }
        else if(flag==1)
        {
            i=-1;
            while(A[++i]>=B[i]&&A[i+1]!='\0')
                ans=((ans<<1)+(A[i]-'0'))%MOD;

            if(A[i+1]=='\0')
               {
                  ch1=A[i];
                  ch2=B[i];
                  mx=ch1>ch2?ch1:ch2;
                  A[i]=B[i];
                  if(strcmp(A,B))
                  {
                      if(A[0]==B[0])
                        ans=((ans<<1)+(mx-'0'))%MOD;
                      else
                        ans=((ans<<1)+(ch2-'0'))%MOD;
                  }

                  else
                    ans=((ans<<1)+1)%MOD;
               }

             else
             {
                --i;
                while(B[++i]!='\0')
                 ans=((ans<<1)+(B[i]-'0'))%MOD;
             }

        }
        else
        {
            i=-1;
            while(B[++i]>=A[i]&&B[i+1]!='\0')
                ans=((ans<<1)+(B[i]-'0'))%MOD;

            if(B[i+1]=='\0')
               {
                  ch1=A[i];
                  ch2=B[i];
                  mx=ch1>ch2?ch1:ch2;
                  A[i]=B[i];
                  if(strcmp(B,A))
                  {
                      if(A[0]==B[0])
                        ans=((ans<<1)+(mx-'0'))%MOD;
                      else
                        ans=((ans<<1)+(ch1-'0'))%MOD;
                  }

                  else
                    ans=((ans<<1)+1)%MOD;
               }

             else
             {
                i--;
                while(A[++i]!='\0')
                 ans=((ans<<1)+(A[i]-'0'))%MOD;
             }

        }

      //printf("Case %lld: %lld\n",j,ans);
       cout<<"Case "<<j<<":"<<" "<<ans<<endl;

    }
    return 0;
}
