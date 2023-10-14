#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    x = x - a;
    y = y - b;
    if ((x + y) <= c && y <= c && x <= c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
