#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int h, m;
    cin >> h >> m;
    cout << (23 - h) * 60 + (60 - m) << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
