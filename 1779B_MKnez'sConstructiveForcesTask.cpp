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

        if (n == 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            if (n % 2 == 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    i % 2 != 0 ? cout << 1 : cout << (-1);
                    cout << " ";
                }
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    i % 2 != 0 ? cout << (n / 2) - 1 : cout << -(n / 2);
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
