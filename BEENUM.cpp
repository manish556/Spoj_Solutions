#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  long long int n,temp;
  while (1)
  {
      cin>>n;
      if(n==-1)
        break;
      else
      {
          temp=1;
          for(int i=1;i>0;i++)
          {
              if(temp==n)
              {
                  cout<<"Y"<<endl;
                  break;
              }
              else if(temp>n)
              {
                  cout<<"N"<<endl;
                  break;
              }
              temp=temp+(6*i);

          }
      }
  }

return 0;
}
