#include <iostream>

using namespace std;

int main()
{
    int t,n,m,flag,X[50],Y[50],X1[50],X2[50],Y1[50],Y2[50];
    float slope;
    cin>>t;
  for(int k=0;k<t;k++)
   {
     cin>>n>>m;
     for(int i=0;i<n;i++)
        cin>>X[i]>>Y[i];

     for(int i=0;i<m;i++)

        cin>>X1[i]>>Y1[i]>>X2[i]>>Y2[i];
     for(int i=0;i<m;i++)
     {
        flag=0;
        if(X1[i]!=X2[i])
        {
            slope=(float)(Y2[i]-Y1[i])/(X2[i]-X1[i]);
            for(int j=0;j<n;j++)
            {   if(X[j]==X1[i])
                   {
                       if(Y1[i]==Y[j])
                          flag++;
                   }

                else if((slope==(float)(Y[j]-Y1[i])/(X[j]-X1[i]))&&(((X2[i]-X[j])*(X[j]-X1[i]))>=0))
                        flag++;
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if((X[j]==X1[i])&&(((Y2[i]-Y[j])*(Y[j]-Y1[i]))>=0))
                   flag++;
            }
        }
        cout<<flag<<endl;
    }
   }

    return 0;
}
