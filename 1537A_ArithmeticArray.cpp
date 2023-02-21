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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        if (sum == n)
        {
            cout << 0 << endl;
        }
        else if (sum > n)
        {
            int t = sum - n;
            cout << t << endl;
        }
        else if (sum < n)
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
