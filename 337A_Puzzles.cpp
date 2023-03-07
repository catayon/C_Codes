#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int diff = a[m - 1];
    for (int i = 0; i < m - n + 1; i++)
    {
        diff = min(diff, a[i + n - 1] - a[i]);
    }
    cout << diff;
    return 0;
}
