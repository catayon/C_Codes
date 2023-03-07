#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    if (s[0] == '-')
    {
        if (l == 3 && s[l - 1] == '0')
        {
            for (int i = 1; i < 3; i++)
            {
                if (i == (l - 2))
                    continue;
                cout << s[i];
            }
        }
        else if (l == 3 && s[l - 2] == '0')
        {
            for (int i = 1; i < 3; i++)
            {
                if (i == (l - 1))
                    continue;
                cout << s[i];
            }
        }
        else
        {
            if (s[l - 1] > s[l - 2])
            {
                for (int i = 0; i < l; i++)
                {
                    if (i == (l - 1))
                        continue;
                    cout << s[i];
                }
            }
            else
            {
                for (int i = 0; i < l; i++)
                {
                    if (i == (l - 2))
                        continue;
                    cout << s[i];
                }
            }
        }
    }
    else
        cout << s;
    return 0;
}
