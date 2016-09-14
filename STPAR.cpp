#include <iostream>
using namespace std;

main()
{
    int flag;
    int n;
    cin>>n;
    while (n)
    {
       flag=0;
       int A[n];
       for(int i=0;i<n;i++)
        {
         cin>>A[i];
        }
       int S[n];
       int i=1,j=-1;
       while (flag<n)
       {
           if(A[flag]==i)
            {i++;
            flag++;}
           else if (j>-1)
           {
             if (S[j]==i)
              {
                i++;
                j--;
              }
             else
             {
              S[++j]=A[flag];
             flag++;
             }
           }
           else
            {
             S[++j]=A[flag];
             flag++;
            }
       }
       int mark=1;
       for(int p=j;p>0;p--)
        if(S[p]+1!=S[p-1])
        mark=0;

       if(mark)
        cout<<"yes\n";
       else
        cout<<"no\n";

    cin>>n;
    }
    return 0;
}
