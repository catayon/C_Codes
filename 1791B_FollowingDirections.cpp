#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        
        pair<int, int> p;

        bool passed = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                p.first++;
            }
            else if (s[i] == 'L')
            {
                p.first--;
            }
            else if (s[i] == 'U')
            {
                p.second++;
            }
            else if (s[i] == 'D')
            {
                p.second--;
            }

            if (p.first == 1 && p.second == 1)
            {
                passed = true;
                break;
            }
        }

        if (passed)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
