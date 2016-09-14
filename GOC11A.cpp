#include<iostream>
#include<stdio.h>
#include<string>
#include<ctype.h>
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


string tm;

string fn(string A,int n)
{
    if(n==1)
        return A;
    if(n==0)
        return "";
    if(n%2==0)
    {
        tm = fn(A,n/2);
        tm+=tm;
        return tm;
    }
    else
    {
        tm=fn(A,n/2);
        tm+=tm;
        tm+=A;
        return tm;
    }
}


int main()
{
    int t,len,i,q,index;
    char S[1000];
    string T,P,temp;
    t=FAST_IO();
    while(t--)
    {
       T="";
       cin>>S;
       i=-1;
       while(S[++i]!='\0')
       {
           if(islower(S[i]))
            T=T+S[i];
           else
            T=fn(T,S[i]-'0');
       }

      len=T.length();
      q=FAST_IO();
      while(q--)
      {
          index=FAST_IO();
          if(index>len)
            {
                putchar('-');
                putchar('1');
            }
          else
            putchar(T[index-1]);
          putchar('\n');
      }
    }


    return 0;
}
