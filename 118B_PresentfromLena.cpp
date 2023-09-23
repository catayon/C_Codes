#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n + 1; i++)
    {
        for (int j = 0; j < abs(n - i) * 2; j++)
            cout << " ";
      
        if (i <= n)
        {
            for (int j = 0; j < i; j++)
                cout << j << " ";
          
            for (int j = i; j >= 0; j--)
            {
                cout << j;
                if (j != 0)
                    cout << " ";
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - i; j++)
                cout << j << " ";
          
            for (int j = 2 * n - i; j >= 0; j--)
            {
                cout << j;
                if (j != 0)
                    cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
