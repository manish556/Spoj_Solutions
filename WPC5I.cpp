#include <iostream>
#include <stdio.h>
using namespace std;
typedef unsigned long long int ul;

ul temp;

inline void getInt(ul &n)  //pass an integer by value
{
  n = 0;
  int ch = getchar();
  int sign = 1;

  while (ch<'0' || ch>'9')  // if the input character is not a digit
  {
    if (ch == '-')
      sign = -1;
    ch = getchar();
  }

  while (ch >= '0' && ch <= '9')
  {
    n = (n << 3) + (n << 1) + ch - '0';  //multiply by 10
    ch = getchar();
  }

  n *= sign;  // for negative numbers
}

ul hcf(ul a,ul b)
{
    if(b==0)
        return a;
    temp = a;
    a = b;
    b = temp%b;
    return hcf(a,b);
}

int main()
{
    ul a,b,h,temp,temp1,temp2,ans,test,var;
    getInt(test);

    for(int i=0;i<test;i++)
    {
        getInt(a);
        getInt(b);
        h=hcf(a,b);
        temp1 = a/h;
        temp2 = b/h;
        ans = temp1*temp2;
        var = 1;

        while(1)
        {
            temp = hcf(ans,h);
            if(temp==1)
                break;
            var*=temp;
            h/=temp;
        }
        ans*=var;
        printf("%llu\n",ans);
    }
    return 0;
}
