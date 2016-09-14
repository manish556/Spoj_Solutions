#include <iostream>
using namespace std;

int main()
{
    float n,nc,temp;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
          nc=1;
          temp=0.5;
        while(temp<n)
        {   nc++;
            temp=temp+(1/(nc+1));
        }
        cout<<nc<<" card(s)"<<endl;
        }
    }
    return 0;
}
