#include <iostream>

using namespace std;

int main()
{
   int n=1,a=1,b=1,c=1;
   while(n==1)
   {
      cin>>a>>b>>c;
      if(a!=0||b!=0||c!=0)
      {
        if ((b-a)==(c-b))
        cout<<"AP "<<(c+(b-a))<<endl;
       else
         cout<<"GP "<<(c*(c/b))<<endl;
      }
      else
        n=0;
   }
    return 0;
}
