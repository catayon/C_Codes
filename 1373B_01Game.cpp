#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.size() > 0)
            {
                if (st.top() != s[i] && st.size() != 0)
                {
                    c++;
                    st.pop();
                }
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        if (c % 2 != 0)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    return 0;
}
