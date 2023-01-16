#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], maxa = 0, maxb = -1000000;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxa = 0;
        int s = sqrt(a[i]);
        if (pow(s, 2) == a[i] || a[i] == 0)
        {
            continue;
        }
        else
        {
            maxa = a[i];
        }
        if (maxa > maxb)
        {
            maxb = maxa;
        }
    }
    cout << maxb;
    return 0;
}
