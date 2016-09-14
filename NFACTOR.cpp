#include<stdio.h>
#define MX 1000001
#define MR 500001

#include<iostream>
using namespace std;
short A[MX];
int B[MX][8];

#define pc(x) putchar(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0');return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}

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
    int t,a,b,n,counter,c,d;
    for(int i=0;i<MX;i++)
       {
           A[i]=0;
       }

    A[1]=0;
    B[0][1]=B[0][2]=B[0][3]=B[0][4]=B[0][5]=B[0][6]=B[0][7]=0;
    B[1][1]=B[1][2]=B[1][3]=B[1][4]=B[1][5]=B[1][6]=B[1][7]=0;
    for(int i=2;i<MR;i++)
    {
        if(A[i]==0)
        {
            A[i]=1;
            for(int j=2*i;j<MX;j+=i)
                 ++A[j];
        }
        B[i][1]=B[i-1][1];
        B[i][2]=B[i-1][2];
        B[i][3]=B[i-1][3];
        B[i][4]=B[i-1][4];
        B[i][5]=B[i-1][5];
        B[i][6]=B[i-1][6];
        B[i][7]=B[i-1][7];
        B[i][A[i]]=B[i][A[i]]+1;
    }

    for(int i=MR;i<MX;i++)
    {
        if(A[i]==0)
            A[i]=1;
        B[i][1]=B[i-1][1];
        B[i][2]=B[i-1][2];
        B[i][3]=B[i-1][3];
        B[i][4]=B[i-1][4];
        B[i][5]=B[i-1][5];
        B[i][6]=B[i-1][6];
        B[i][7]=B[i-1][7];
        B[i][A[i]]=B[i][A[i]]+1;
    }

    t = FAST_IO();
    for(int i=0;i<t;i++)
    {
        a = FAST_IO();
        b = FAST_IO();
        n = FAST_IO();

       /* for(int i=a;i<=b;i++)
            if(A[i]==n)
               counter++; */
        if(n>7)
        {
            cout<<0<<endl;
            continue;
        }

        if(n==0)
           {
               if(a==1)
                cout<<1<<endl;
               else
                cout<<0<<endl;
               continue;
           }

        counter = B[b][n]-B[a-1][n];
        writeInt(counter);
        printf("\n");
    }
    return 0;
}
