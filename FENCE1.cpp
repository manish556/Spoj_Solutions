#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    float L;
    float a;
    while(1)
    {
        cin>>L;
        if(L!=0)
        {
            a=L*L/2/3.141592653;
            printf("%.2f\n",a);
        }
        else
            break;
    }
    return 0;
}
