#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll c1 = n * a;
    ll c2 = (n / m) * b + (n % m) * a;
    ll c3 = (n / m + 1) * b;
    cout << min(c1, min(c2, c3));
    return 0;
}
