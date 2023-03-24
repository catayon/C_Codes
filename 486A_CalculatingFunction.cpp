#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    if (t % 2 == 0)
    {
        cout << t / 2;
    }
    else
    {
        cout << -(t + 1) / 2;
    }
    return 0;
}
