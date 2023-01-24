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
        int b[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {
                b[j] = a[j / 2];
            }
        }
        int k = 1;
        for (int j = n - 1; j >= 0; j--)
        {
            b[k] = a[j];
            k = k + 2;
        }
        for (int j = 0; j < n; j++)
        {
            cout << b[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
