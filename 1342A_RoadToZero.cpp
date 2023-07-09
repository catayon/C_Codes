#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

void solve()
{
    ll x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;
    ll z = x;
    x = max(x, y);
    y = min(y, z);
    (b > (2 * a)) ? cout << (x + y) * a << endl : cout << ((y)*b) + ((x - y) * a) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
