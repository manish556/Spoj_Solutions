#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned long long int t,k,m,s,B[100000];
    char OP[100000], A[1000000];
    cin>>t;
    getchar();
    int j;
    for(int i=0;i<t;i++)
    {   getchar();
        B[0]=0;
        j=-1,m=-1,k=0;
        gets(A);
        while(A[++j]!='=')
        {
            if(A[j]==' ')
                continue;
            else if(A[j]=='+'||A[j]=='-'||A[j]=='*'||A[j]=='/')
            {
                k++; B[k]=0;
                OP[++m]=A[j];
            }
            else if (A[j]>='0'&&A[j]<='9')
                B[k]=B[k]*10+(A[j]-'0');
        }
        s=B[0];
        for(int f=0;f<=m;f++)
        {
            if(OP[f]=='+')
                s=s+B[f+1];
            else if(OP[f]=='-')
                s=s-B[f+1];
            else if(OP[f]=='*')
                s=s*B[f+1];
            else
                s=s/B[f+1];
        }
        cout<<s<<endl;
    }
    return 0;
}
