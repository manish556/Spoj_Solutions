# include<iostream>
using namespace std;

int main()
{
    int t,n;
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        else
         {
             int A[n];
            long long int moves=0, s=0;
            for(int i=0;i<n;i++)
              {
                  cin>>A[i];
                  s=s+A[i];
              }
              if(s/n!=(float)s/n)
              {
                cout<<-1<<endl;
              }
              else
              {
                for(int j=0;j<n;j++)
                {
                    if(A[j]<s/n)
                    {
                        moves=moves+(s/n-A[j]);
                    }
                }
                cout<<moves<<endl;
              }
         }
    }
    return 0;
}
