#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    bool f = 0;
    if (s[l - 1] == '2' || s[l - 1] == '4' || s[l - 1] == '6' || s[l - 1] == '8')
        cout << 0 << endl;
    else if (s[0] == '2' || s[0] == '4' || s[0] == '6' || s[0] == '8')
        cout << 1 << endl;
    else
    {
        for (int i = 0; i < l; i++)
        {
            if (s[i - 1] == '2' || s[i - 1] == '4' || s[i - 1] == '6' || s[i - 1] == '8')
            {
                f = 1;
                break;
            }
        }
        cout << (f ? 2 : -1) << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
