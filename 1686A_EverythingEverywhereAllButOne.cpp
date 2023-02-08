#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;

    for (float i = 0; i < t; i++)
    {
        cin >> n;

        float a[n];
        float sum = 0;
        
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            sum = sum + a[j];
        }

        float pass = 0;

        for (int j = 0; j < n; j++)
        {
            if ((sum - a[j]) / (n - 1) == a[j])
            {
                pass = 1;
                break;
            }
        }

        if (pass == 1)
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
