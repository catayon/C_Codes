#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    queue<int> q, rank;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
        rank.push(i);
    }
    while (q.size() != 1)
    {
        if (q.front() > k)
        {
            q.push(q.front() - k);
            rank.push(rank.front());
        }
        q.pop();
        rank.pop();
    }
    cout << rank.front() + 1 << endl;
}

int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}
