#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> n;

        bool is_ugly = false;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                swap(a[i + 1], a[n - 1]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (sum == a[i])
            {
                is_ugly = true;
                break;
            }
            sum += a[i];
        }

        if (is_ugly)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
