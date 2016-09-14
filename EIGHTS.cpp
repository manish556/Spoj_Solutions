#include<iostream>
# include <math.h>
using namespace std;

int main()
{
  unsigned long long int k,n;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>k;
      n=192+(k-1)*250;
      cout<<n<<endl;
  }

  return 0;
}
