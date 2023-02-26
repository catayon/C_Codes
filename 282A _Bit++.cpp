#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x = 0;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        s[1] == '+' ? x++ : x--;
    }

    cout << x;

    return 0;
}
