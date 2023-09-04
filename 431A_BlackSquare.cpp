#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(4);

    for (int i = 0; i < 4; i++)
        cin >> v[i];

    string s;
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.size(); i++)
        sum += v[s[i] - '0' - 1];

    cout << sum;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
