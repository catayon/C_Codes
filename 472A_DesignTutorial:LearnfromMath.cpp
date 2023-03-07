#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 4, b = n - 4;
    while (true)
    {
        bool a_iscomposite = false, b_iscomposite = false;
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                a_iscomposite = true;
                break;
            }
        }
        for (int i = 2; i < b; i++)
        {
            if (b % i == 0)
            {
                b_iscomposite = true;
                break;
            }
        }
        if (a_iscomposite && b_iscomposite)
        {
            break;
        }
        else
        {
            a++;
            b--;
        }
    }
    cout << a << " " << b;

    return 0;
}
