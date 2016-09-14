#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   int x[t],y[t];
   for(int i=0;i<t;i++)
   {
       cin>>x[i]>>y[i];
   }
   for(int i=0;i<t;i++)
   {
       if((y[i]==x[i]||y[i]==x[i]-2)&&((y[i]>=0)&&(x[i]>=0)))
         {
               if(y[i]==x[i])
                 {
                     if(x[i]%2==0)
                       cout<<x[i]*2<<endl;
                     else
                       cout<<((2*x[i])-1)<<endl;
                 }
               else
                 {
                     if(x[i]%2==0)
                        cout<<x[i]*2-2<<endl;
                     else
                        cout<<((2*x[i])-3)<<endl;
                 }
        }
        else
            cout<<"No Number"<<endl;
   }
    return 0;
}
