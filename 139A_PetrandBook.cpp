#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(7);

    for (int i = 0; i < 7; i++)
        cin >> v[i];

    int count = 0;

    for (int i = 0; true; i++)
    {
        if (count >= n)
        {
            cout << (i % 7 ? (i % 7) : 7) << endl;
            break;
        }
        count += v[i % 7];
    }
}

int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}
