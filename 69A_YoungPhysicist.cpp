#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[3] = {0, 0, 0};
    cin >> n;

    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        a[0] = a[0] + x;
        a[1] = a[1] + y;
        a[2] = a[2] + z;
    }

    if (a[0] == 0 && a[1] == 0 && a[2] == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
