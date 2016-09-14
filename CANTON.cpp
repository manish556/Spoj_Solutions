#include <iostream>

using namespace std;

int main()
{
 int t,n,s,i,x,y;
 cin>>t;
 for(int j=0;j<t;j++)
 {   s=0;
     cin>>n;
     i=0;
     while(s<n)
     {
         i++;
         s=s+i;
     }
  if(i%2==0)
  {
      x=i*(i+1)/2-n+1;
      y=i+1-x;
  }
  else
  {
      y=(i*(i+1)/2-n+1);
      x=i+1-y;
  }
  cout<<"TERM "<<n<<" "<<"IS "<<y<<"/"<<x<<endl;
 }
    return 0;
}
