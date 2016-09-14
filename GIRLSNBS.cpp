#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int A[2];
    while(1)
    {
        cin>>A[0]>>A[1];
        if(A[0]==-1)
            break;
        else
        {
            sort(A,A+2);
            A[0]+=1;

            if((int)A[1]/A[0]<(float)A[1]/A[0])
                cout<<A[1]/A[0]+1<<endl;
            else
                cout<<A[1]/A[0]<<endl;
        }
    }
    return 0;
}
