#include<iostream>

using namespace std;
void shellSort(int numbers[], int array_size)
	{
	  int i, j, increment, temp;
	  increment = 3;
	  while (increment > 0)
	  {
	    for (i=0; i < array_size; i++)
	    {
	      j = i;
	      temp = numbers[i];
	      while ((j >= increment) && (numbers[j-increment] > temp))
	      {
	        numbers[j] = numbers[j - increment];
	        j = j - increment;
	      }
	      numbers[j] = temp;
	    }
	    if (increment/2 != 0)
	      increment = increment/2;
	    else if (increment == 1)
	      increment = 0;
	    else
	      increment = 1;
	  }
	}
int main()
{
    int t;
    unsigned long long int n;
    long double s;
    cin>>t;
    for(int i=0;i<t;i++)
    {   s=0;
        cin>>n;
        int A[n],B[n];
        for(int j=0;j<n;j++)
        {
            cin>>A[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>B[j];
        }
        shellSort(A,n);
        shellSort(B,n);
        for(int j=0;j<n;j++)
        {
            s=s+(A[j]*B[j]);
        }
        cout<<s<<endl;
    }
     return 0;
}
