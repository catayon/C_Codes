#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        bool passed = false;
        while (n % 2 == 0){n = n / 2;}
        if (n > 1){passed = true;}
        if (passed){cout << "YES" << endl;}
        else{cout << "NO" << endl;}
    }
    return 0;
}
