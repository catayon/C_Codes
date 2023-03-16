#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    reverse(s.begin(), s.end());
    s == t ? cout << "YES" : cout << "NO";
    return 0;
}
