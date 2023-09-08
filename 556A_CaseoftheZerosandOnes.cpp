#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (st.size() > 0)
        {
            if ((c == '0' and st.top() == '1') || (c == '1' and st.top() == '0'))
                st.pop();
            else
                st.push(c);
        }
        else
        {
            st.push(c);
        }
    }
    cout << st.size();
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
