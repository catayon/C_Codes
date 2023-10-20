#include <bits/stdc++.h>
using namespace std;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void solve()
{
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            a++;
        if (s[i] == 'B')
            b++;
        if (s[i] == 'C')
            c++;
    }
    if (b == a + c)
        yes();
    else
        no();
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
