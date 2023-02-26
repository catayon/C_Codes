#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, total = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total = total + a[i];
    }

    sort(a, a + n);

    int you_have = 0, twin_has = total, coins_taken = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        you_have = you_have + a[i];
        twin_has = twin_has - a[i];
        coins_taken++;
        if (you_have > twin_has)
        {
            break;
        }
    }

    cout << coins_taken;

    return 0;
}
