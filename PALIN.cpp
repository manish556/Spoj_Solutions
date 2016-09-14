#include <iostream>
#include <cstring>

using namespace std;

char a[1000002];

void increment(int &len)
{
    int flag = 0;
    for (int i = len - 1; i >= 0; --i)
    {
        if (a[i] < '9')
        {
            a[i]++;
            flag = 1;
            break;
        }
        else
            a[i] = '0';
    }
    if (!flag)
    {
        a[len] = '0';
        a[len + 1] = 0;
        a[0] = '1';
        ++len;
    }
}

int main()
{
    int t, len, mid, flag;
    cin >> t;
    while (t--)
    {
        cin >> a;
        len = strlen(a);
        increment(len);

        if (len == 1)
        {
            cout << a << '\n';
            continue;
        }

        flag = 0;
        for (int l = len/2 - 1, r = (len + 1)/2; l >= 0; --l, ++r)
        {
            if (a[l] > a[r])
            {
                flag = 1;
                break;
            }
            else if (a[l] < a[r])
            {
                flag = 2;
                break;
            }
        }

        if (!flag)
        {
            cout << a << '\n';
            continue;
        }

        if (flag == 2)
        {
            for (int i = (len - 1)/2; i >= 0; --i)
            {
                if (a[i] < '9')
                {
                    a[i]++;
                    break;
                }
                else
                    a[i] = '0';
            }
        }
        for (int i = 0; i <= len/2 - 1; ++i)
            cout << a[i];
        if (len % 2)
            cout << a[len/2];
        for (int i = len/2 - 1; i >= 0; --i)
            cout << a[i];
        cout << '\n';
    }
 }
