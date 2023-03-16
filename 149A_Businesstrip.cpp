#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[12], centi = 0, months = 0;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    if (centi >= n)
    {
        flag = 1;
    }
    else
    {
        for (int i = 11; i >= 0; i--)
        {
            centi = centi + a[i];
            months++;
            if (centi >= n)
            {
                flag = true;
                break;
            }
        }
    }
    flag == true ? cout << months : cout << -1;
    return 0;
}
