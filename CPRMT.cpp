#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
 char A[1002],B[1002];
 int C[26],D[26];
 while(cin>>A)
 {
   for(int i=0;i<26;i++)
     C[i]=D[i]=0;
 cin>>B;
 int len=strlen(A);
 for(int i=0;i<len;i++)
    C[(int)A[i]-97]++;
 len=strlen(B);
 for(int i=0;i<len;i++)
    D[(int)B[i]-97]++;

 for(int i=0;i<26;i++)
 {
    // cout<<C[i]<<" "<<D[i]<<endl;
     len=min(C[i],D[i]);
     for(int j=0;j<len;j++)
     cout<<(char)(i+97);
 }
  cout<<endl;
 }
 return 0;
}
