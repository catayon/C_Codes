#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t, n, x, y, z;
    cin >> t;

    for (long i = 0; i < t; i++)
    {
        cin >> n;

        long a[2 * n];

        for (long j = 0; j < 2 * n; j++)
        {
            cin >> a[j];
        }

        sort(a,a+2*n);

        for (long j = 0; j < n; j++)
        {
            cout<<a[j]<<" "<<a[j+n]<<" ";
            
        }
    }

    return 0;
}
