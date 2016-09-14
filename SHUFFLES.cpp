#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

#define gc() getchar()
int isSpaceChar(char c) {
            return c == ' ' || c == '\n' || c == '\r' ;
        }
inline int FAST_IO()
{
    char ch;
    int val=0;
    ch=gc();
    while(isSpaceChar(ch))
            ch=gc();
    val=0;
    while(!isSpaceChar(ch))
    {
        val=(val*10)+(ch-'0');
        ch=gc();
    }
    return val;
}


int main()
{
  int n,k,i,flag;

  int *A;
  A=new int[1000000];

      n=FAST_IO();
    for(int j=0;j<n;j++)
       {
          *(A+j)=FAST_IO();
       }
      for(k=0;k<n;k++)
        if(*(A+k)==1)
          {
             break;
          }
    i=1;
   for(int m=k+1;m<n;m++)
    {
      if(*(A+m)==i+1)
            i=i+1;
    }
    flag=1;
    while(i!=n)
     {
        for(int m=0;m<n;m++)
         {
           if(*(A+m)==i+1)
                i=i+1;
         }
         flag++;
     }
    cout<<(log2(flag)>(int)log2(flag)?(int)log2(flag)+1:log2(flag));

    return 0;
}
