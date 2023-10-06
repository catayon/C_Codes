#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cout << ((n % 4 == 0) ? "YES" : "NO") << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
