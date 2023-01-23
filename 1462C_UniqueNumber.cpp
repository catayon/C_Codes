#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,count;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n <= 9)
        {
            cout << n << endl;
        }
        else if (n > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            count = 0;
            for (int j = 9; n > 0; j--)
            {
                if (n < j)
                {
                    m = n * pow(10, 9 - j);
                    if (m % 10 == 0 || m < 10)
                    {
                        count = count + m;
                    }
                    else
                    {
                        m++;
                        count = count + m;
                    }
                    n = 0;
                }
                else
                {
                    n = n - j;
                    m = j * pow(10, 9 - j);
                    if (m % 10 == 0 || m < 10)
                    {
                        count = count + m;
                    }
                    else
                    {
                        m++;
                        count = count + m;
                    }
                }
            }

            cout << count << endl;
        }
    }

    return 0;
}
