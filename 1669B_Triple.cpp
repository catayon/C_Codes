#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = -1;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        for (int j = n - 1; j >= 2; j--)
        {
            if (a[j - 1] == a[j] && a[j - 2] == a[j])
            {
                max = a[j];
                break;
            }
        }
        if (n < 3)
            cout << (-1) << endl;
        else
            cout << max << endl;
    }
    return 0;
}
