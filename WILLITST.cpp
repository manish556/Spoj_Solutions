#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if((int)log2(n)==(float)log2(n))
        cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
    return 0;
}
