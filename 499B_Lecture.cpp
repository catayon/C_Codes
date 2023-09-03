#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> x, y;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a.size() <= b.size())
            b = a;
        x.push_back(a);
        y.push_back(b);
    }

    for (int i = 0; i < n; i++)
    {
        string z;
        cin >> z;
        for (int j = 0; j < x.size(); j++)
        {
            if (x[j] == z)
            {
                cout << y[j] << " ";
                break;
            }
        }
    }
}

int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}
