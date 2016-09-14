#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int a,t,A[10][4],B[10];
  A[0][0]=0;A[1][0]=1;A[2][0]=6;A[2][1]=2;A[2][2]=4;A[2][3]=8;A[3][0]=1;A[3][1]=3;A[3][2]=9;A[3][3]=7;A[4][0]=6;A[4][1]=4;A[5][0]=5;A[6][0]=6;A[7][0]=1;A[7][1]=7;A[7][2]=9;A[7][3]=3;A[8][0]=6;A[8][1]=8;A[8][2]=4;A[8][3]=2;A[9][0]=1;A[9][1]=9;
  B[0]=1;B[1]=1;B[2]=4;B[3]=4;B[4]=2;B[5]=1;B[6]=1;B[7]=4;B[8]=4;B[9]=2;
  unsigned long long int b;
  char C[1005];
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>C>>b;
    if(b==0)
     cout<<1<<endl;
    else
     {
      a=strlen(C);
      a=C[a-1]-'0';
      b=b%B[a];
      cout<<A[a][b]<<endl;
     }
}
return 0;
}
