#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, H, M;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> H >> M;

        int sleep = 60 * H + M;
        int next = 24 * 60;

        for (int p = 0; p < n; p++)
        {
            int h, m;

            cin >> h >> m;

            int flag = 60 * h + m - sleep;

            if (flag < 0)
            {
                flag = flag + 24 * 60;
            }

            if (next > flag)
            {
                next = flag;
            }
        }

        int hours = next / 60;
        int mins = next - 60 * hours;

        cout << hours << " " << mins << endl;
    }
    
    return 0;
}
