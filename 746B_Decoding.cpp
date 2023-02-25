#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid(n / 2);

    string s;
    cin >> s;
    string t = s;

    if (n % 2 != 0)
    {
        int left(mid - 1), right(mid + 1);
        t[mid] = s[0];
        for (int i = 1; i < n; i++)
        {
            (i % 2 != 0) ? t[left--] = s[i] : t[right++] = s[i];
        }
    }
    else
    {
        mid--;
        int left(mid - 1), right(mid + 1);
        t[mid] = s[0];
        for (int i = 1; i < n; i++)
        {
            (i % 2 != 0) ? t[right++] = s[i] : t[left--] = s[i];
        }
    }

    cout << t;

    return 0;
}
