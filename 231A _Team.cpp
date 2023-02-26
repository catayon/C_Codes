#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;

    while (t--)
    {
        vector<int> v(3);
        int sureness = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                sureness++;
            }
        }
        if (sureness >= 2)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
