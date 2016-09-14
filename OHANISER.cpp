#include<iostream>
#define M 1000000007
using namespace std;


int main()
{
    unsigned long t, A[100000];
    int test,n;
	A[0] = t = 1;
	for(int i = 1; i < 100000; i++) {
		A[i] = ((A[i-1]*2)+t)%M;
		t=(t*2)%M;
	}

  cin>>test;
  for(int i=1;i<=test;i++)
  {
      cin>>n;
      cout<<"Case "<<i<<": "<<A[n-1]<<endl;
  }
}
