#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s == "acb" || s == "cba" || s == "bac" || s == "abc")
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
