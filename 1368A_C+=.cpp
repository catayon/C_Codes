#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = 0;
    while (a <= n && b <= n)
    {
        if (a < b)
            a += b;
        else
            b += a;
      ans++;
    }
    cout << ans << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
