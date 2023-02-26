#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    cin >> s;

    if (strstr(s, "10000000") != 0)
    {
        cout << "YES";
    }
    else if (strstr(s, "00000001") != 0)
    {
        cout << "YES";
    }
    else if (strstr(s, "01111111") != 0)
    {
        cout << "YES";
    }
    else if (strstr(s, "11111110") != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
