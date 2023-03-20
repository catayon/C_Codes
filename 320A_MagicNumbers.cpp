#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 2;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 1;
        }
        else if (s[i] == '1')
        {
            continue;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    flag ? cout << "NO" : cout << "YES";
    return 0;
}
