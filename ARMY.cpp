#include <iostream>

using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        int G[n],MG[m],hg=0,hmg=0;
        for(int j=0;j<n;j++)
          {
              cin>>G[j];
              if(G[j]>hg)
                hg=G[j];
          }
        for(int j=0;j<m;j++)
           {
               cin>>MG[j];
               if(MG[j]>hmg)
                 hmg=MG[j];
           }
        if(hg>=hmg)
            cout<<"Godzilla"<<endl;
        else
            cout<<"MechaGodzilla"<<endl;

    }
    return 0;
}
