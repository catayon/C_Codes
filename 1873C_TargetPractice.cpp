#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char c;
    char a[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> c;
            if (c == 'X')
                score += a[i][j];
        }
    }
    cout << score << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
