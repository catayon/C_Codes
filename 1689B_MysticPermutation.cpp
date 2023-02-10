#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        
        int a[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int b[n];
        copy(a, a + n, b);

        if (n == 1)
        {
            cout << (-1) << endl;
        }
        else
        {
            sort(b, b + n);

            for (int j = 0; j < n; j++)
            {
                if (a[j] == b[j])
                {
                    if (j == n - 1)
                    {
                        int t = b[j];
                        b[j] = b[j - 1];
                        b[j - 1] = t;
                    }
                    else
                    {
                        int t = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = t;
                    }
                }
            }

            for (int j = 0; j < n; j++)
            {
                cout << b[j] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
