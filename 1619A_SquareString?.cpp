#include <bits/stdc++.h>
using namespace std;

/* clang-format off */
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
/* clang-format on */

void solve()
{
    string s;
    cin >> s;
    string s1, s2;
    for (int i = 0; i < s.size() / 2; i++)
        s1 = s1 + s[i];
    for (int i = s.size() / 2; i < s.size(); i++)
        s2 = s2 + s[i];
    (s1 == s2) ? yes(): no();
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
