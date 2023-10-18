#include <bits/stdc++.h>
using namespace std;
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
void solve()
{
    int n, x;
    cin >> n;
    set<long long> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }
    if (st.size() == n)
        yes();
    else
        no();
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
