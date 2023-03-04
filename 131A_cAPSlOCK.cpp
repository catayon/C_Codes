#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int l = s.length(), case1 = 0, case2 = 0;

    for (int i = 0; i < l; i++)
    {
        if (isupper(s[i]))
            case1++;
    }

    for (int i = 1; i < l; i++)
    {
        if (isupper(s[i]))
            case2++;
    }

    if (case1 == s.length())
    {
        for (int i = 0; i < l; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else if (case2 == l - 1 && islower(s[0]))
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < l; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}
