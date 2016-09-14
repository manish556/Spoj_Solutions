#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,temp;
    char A[41],B[4];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>temp;
        int C[8]={0,0,0,0,0,0,0,0};
        cin>>A;
        for(int j=0;j<38;j++)
        {
            B[0]=A[j];
            B[1]=A[j+1];
            B[2]=A[j+2];
            B[3]='\0';
            if(strcmp(B,"TTT")==0)
              C[0]++;
            else if (strcmp(B,"TTH")==0)
              C[1]++;
            else if (strcmp(B,"THT")==0)
              C[2]++;
            else if (strcmp(B,"THH")==0)
              C[3]++;
            else if (strcmp(B,"HTT")==0)
              C[4]++;
            else if (strcmp(B,"HTH")==0)
              C[5]++;
            else if (strcmp(B,"HHT")==0)
              C[6]++;
            else
              C[7]++;
        }
        cout<<temp;
          for(int p=0;p<8;p++)
            cout<<" "<<C[p];
        cout<<endl;
    }
    return 0;
}
