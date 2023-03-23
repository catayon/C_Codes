#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
    {
        cout << -1;
    }
    else
    {
        if (t == 10)
        {
            for (ll i = 0; i < n - 1; i++)
            {
                cout << 1;
            }
            cout << 0;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << t;
            }
        }
    }
    return 0;
}
