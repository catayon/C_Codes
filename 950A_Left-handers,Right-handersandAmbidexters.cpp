#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, a;
    cin >> l >> r >> a;
    int team = 0;
    if (l > r)
    {
        team = r;
        l = l - r;
        if (l > a)
        {
            team = team + a;
        }
        else
        {
            team = team + l;
            a = a - l;
            team = team + a / 2;
        }
    }
    else
    {
        team = l;
        r = r - l;
        if (r > a)
        {
            team = team + a;
        }
        else
        {
            team = team + r;
            a = a - r;
            team = team + a / 2;
        }
    }

    cout << 2 * team;

    return 0;
}
