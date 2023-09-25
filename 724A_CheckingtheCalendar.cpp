#include <bits/stdc++.h>
using namespace std;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
void solve()
{
    map<string, int> m;

    m["monday"] = 1;
    m["tuesday"] = 2;
    m["wednesday"] = 3;
    m["thursday"] = 4;
    m["friday"] = 5;
    m["saturday"] = 6;
    m["sunday"] = 7;

    string a;
    string b;

    cin >> a >> b;

    if ((m[a] - m[b]) == 0)
        yes();
    else if ((m[a] - m[b]) == -2 || (a == "saturday" && b == "monday") || (a == "sunday" && b == "tuesday"))
        yes();
    else if ((m[a] - m[b]) == -3 || (a == "friday" && b == "monday") || (a == "saturday" && b == "tuesday") || (a == "sunday" && b == "wednesday"))
        yes();

    else
        no();
}

int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}
