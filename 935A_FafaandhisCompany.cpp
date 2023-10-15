#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % (n - i) == 0)
            c++;
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
