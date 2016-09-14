#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char A[50];
    int t,j,x,flag;
    cin>>t;
    cin.get();
    for(int i=0;i<t;i++)
    {
        cin.get();
        gets(A);
        j=-1,x=0;
        int S[3]={0,0,0};
        while(A[++j]!='\0'&&A[j]!='\n')
        {
                if(A[j]>='0'&&A[j]<='9')
                {
                    S[x]=S[x]*10+(A[j]-'0');
                }
                else if(A[j]=='+'||A[j]=='=')
                {
                    x++;
                }
                else if(A[j]=='m')
                    flag=x;
        }
        if(flag==2)
          S[2]=S[0]+S[1];
        else
            S[flag]=S[2]-S[1-flag];
        cout<<S[0]<<" + "<<S[1]<<" = "<<S[2]<<endl;
    }
    return 0;
}


