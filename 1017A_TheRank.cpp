#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, d, lessthan = 0;
    cin >> t;
    int n[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        n[i] = a + b + c + d;
    }

    for (int i = 1; i < t; i++)
    {
        if (n[i] > n[0])
        {
            lessthan++;
        }
    }

    printf("%d", lessthan + 1);

    return 0;
}
