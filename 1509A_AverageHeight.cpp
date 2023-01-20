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

        int cnteven = 0, cntodd = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                cnteven++;
            }
            else
            {
                cntodd++;
            }
        }

        int even[cnteven], odd[cntodd], k = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 != 0)
            {
                odd[k] = a[j];
                k++;
            }
        }

        k = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                even[k] = a[j];
                k++;
            }
        }

        for (int j = 0; j < cntodd; j++)
        {
            cout << odd[j] << " ";
        }
        for (int j = 0; j < cnteven; j++)
        {
            cout << even[j] << " ";
        }

        cout << endl;
    }
    return 0;
}
