#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll x, i, dummy, bacteria = 1;
    cin >> x;
    while (x >= 2)
    {
        i = 0;
        while (true)
        {
            dummy = x;
            dummy = dummy - pow(2, i);
            if (dummy < 0)
            {
                x = x - pow(2, i - 1);
                x >= 2 ? bacteria += 1 : bacteria += x;
                break;
            }
            else if (dummy == 0)
            {
                x = x - pow(2, i);
                x >= 2 ? bacteria += 1 : bacteria += x;
                break;
            }
            i++;
        }
    }
    cout << bacteria << endl;
    return 0;
}
