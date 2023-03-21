#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll t = a[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if (a[i] >= a[i - 1])
        {
            t = t + a[i] - a[i - 1];
        }
        else if (a[i] < a[i - 1])
        {
            t = t + n - (a[i - 1] - a[i]);
        }
    }
    cout << t;
    return 0;
}
