#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    ll count = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            count++;
        }
    }
    string t = to_string(count);
    bool flag = false;
    for (ll i = 0; i < t.length(); i++)
    {
        if (t[i] != '4' && t[i] != '7')
        {
            flag = true;
            break;
        }
    }
    flag == true ? cout << "NO" : cout << "YES";
    return 0;
}
