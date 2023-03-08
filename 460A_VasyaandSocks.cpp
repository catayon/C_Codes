#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int pairs = n;
    int r = 0;
    while (n >= m)
    {
        r = r + n - (n / m) * m;
        n = n / m;
        pairs = pairs + n;
        n = n + r;
        r = 0;
    }
    cout << pairs;
    return 0;
}
