#include <iostream>
using namespace std;

int main()
{
    int n,flag;
    while (1)
    {
        cin>>n;
        if(!n)
            break;
        else
        {
            flag=0;
            int A[n+1];
            for(int i=1;i<=n;i++)
              cin>>A[i];
            for(int j=1;j<=n;j++)
            {
                if(A[A[j]]!=j)
                 {
                     flag=1;
                     break;
                 }

            }
            if(flag==0)
                cout<<"ambiguous"<<endl;
            else
                cout<<"not ambiguous"<<endl;
        }
    }
    return 0;
}
