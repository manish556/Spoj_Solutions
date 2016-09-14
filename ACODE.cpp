#include <iostream>
#include <stdio.h>

using namespace std;

unsigned long long int perm(int y)
{
 unsigned long long int a3,a1=1,a2=2;
  if(y==1)
    return 1;
    else if(y==2)
     return 2;
     else
        {
           for(int j=3;j<=y;j++)
             {
                 a3=a1+a2;
                 a1=a2;
                 a2=a3;
             }
             return a3;
        }
}
int main()
{
    unsigned long long int res;
    int x,m,cont;

    char p[5005];

    while(1)
    {
        cin>>p;
        if(p[0]=='0')
            break;
        else
       {

        res=1;
        m=1;
        cont=1;
        x=p[0]-48;

       while(p[m]>='0'&&p[m]<='9')
        {

            x=x*10+(p[m]-48);
            if(p[m]=='0')
            {
                if(cont>1)
                cont--;
                res=res*perm(cont);
                cont=1;
            }
            else if(x<27&&x>10)
                {
                    cont++;
                }
            else
                {

                    res=res*perm(cont);
                    cont=1;
               }
            m++;
            x=x%10;
        }
        if(cont!=1)
            res=res*perm(cont);
       cout<<res<<endl;

       }
    }

    return 0;
}
