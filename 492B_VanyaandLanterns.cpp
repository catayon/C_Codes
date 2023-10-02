#include <bits/stdc++.h>
using namespace std;

/* clang-format off */
#define ll long long
#define vll vector<long long>
#define all(v) (v).begin(), (v).end()
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
/* clang-format on */

void solve()
{
    ll n, l;
    cin >> n >> l;
    vll v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));
    double m = 0;

    for (int i = 1; i < n; i++)
        m = max(m, v[i] - v[i - 1]);

    double c1 = v[0], c2 = (l - v[n - 1]);

    cout << setprecision(10) << fixed << max(c1, max(c2, m / 2.0));
}

int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}
