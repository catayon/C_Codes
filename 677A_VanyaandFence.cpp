#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, width = 0;
    cin >> n >> h;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] > h ? width += 2 : width++ 1;
    }
    cout << width;
    return 0;
}
