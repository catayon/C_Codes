#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, prime = 0, fac = 0;
    cin >> a >> b;

    for (int j = a + 1; j < b + 1; j++)
    {
        int factors = 0;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                factors++;
            }
        }
        if (factors == 0)
        {
            prime++;
        }
    }

    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            fac++;
        }
    }

    if (fac == 0)
    {
        if (prime == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
