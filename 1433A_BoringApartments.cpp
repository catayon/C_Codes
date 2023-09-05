#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int c = 0;
    for (int i = 0; i < 1000; i++)
    {
        c += i % 4 + 1;
        v.push_back(c);
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int start = (s[0] - '0' - 1) * 4;
        start += s.size() - 1;

        cout << v[start] << endl;
    }

    return 0;
}
