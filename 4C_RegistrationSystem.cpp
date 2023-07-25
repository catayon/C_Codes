#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ++m[s] == 1 ? cout << "OK" << endl : cout << s << m[s] - 1 << endl;
    }
    return 0;
}
