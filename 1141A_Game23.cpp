#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    if (t / n == 1 && t % n == 0)
    {
        cout << 0;
    }
    else if (t % n == 0 && t / n != 1)
    {
        int d = t / n;
        int cnt2 = 0;
        int cnt3 = 0;
        while (d % 2 == 0)
        {
            d = d / 2;
            cnt2++;
        }
        while (d % 3 == 0)
        {
            d = d / 3;
            cnt3++;
        }
        if ((cnt2 == 0 && cnt3 == 0) || d != 1)
        {
            cout << -1;
        }
        else
        {
            cout << cnt2 + cnt3;
        }
    }
    else if (t % n != 0)
    {
        cout << -1;
    }
    return 0;
}
