#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int operations = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B' && operations == 0)
        {
            operations++;
            c = 1;
        }
        else if (s[i] == 'B' && c == k)
        {
            operations++;
            c = 1;
        }
        else if (c > 0 && c < k)
        {
            c++;
        }
    }
    cout << operations << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
