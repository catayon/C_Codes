#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll ansmin = ((n % m) * ((n / m) + 1) * ((n / m) + 1 - 1) / 2) + (m - (n % m)) * (n / m) * ((n / m) - 1) / 2;
    ll ansmax = ((n - (m - 1)) * ((n - (m - 1)) - 1)) / 2;
    cout << ansmin << " " << ansmax << endl;
    return 0;
}
