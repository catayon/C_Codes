#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;

    bool lost = false;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (s > v[i].first)
        {
            s = s + v[i].second;
        }
        else
        {
            lost = true;
            break;
        }
    }

    if (lost)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
