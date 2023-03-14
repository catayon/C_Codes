#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int t = 0;
    for (int i = 1; i <= w; i++)
    {
        t = t + i * k;
    }
    if (t <= n)
    {
        cout << 0;
    }
    else
    {
        cout << t - n;
    }
    return 0;
}
