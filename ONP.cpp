#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

class Stck{
  public:
    char A[401];
    int top;
    Stck();
    void push(char ch);
    char pop();
};

Stck::Stck()
{
    top=-1;
}

void Stck::push(char ch)
{
    A[++top]=ch;
}

char Stck::pop()
{
    top--;
    return A[top+1];
}


int main()
{
    int t,len;
    char A[401];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        Stck S;
        cin>>A;
        len=strlen(A);
        for(int j=0;j<len;j++)
        {
           if(A[j]>=97&&A[j]<=122)
            cout<<A[j];
           else if(A[j]=='+'||A[j]=='-'||A[j]=='/'||A[j]=='*'||A[j]=='%'||A[j]=='^')
            S.push(A[j]);
           else if(A[j]==')'||A[j]=='}')
            cout<<S.pop();
        }
        cout<<endl;

    }

    return 0;
}
