#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, c = 0;
    cin >> n >> m;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            if (((i * i + j) == n) && ((i + j * j) == m))
                c++;
        }
    }
    cout << c << endl;
}

int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}
