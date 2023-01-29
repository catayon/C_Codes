#include <iostream>
using namespace std;
int main()
{
    long long int t, n, r, m, count;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        m = 0;
        r = 0;
        count = 0;

        if (n % 2050 == 0)
        {
            for (int j = 0; n != 0; j++)
            {
                n = n - 2050;
                count++;
            }

            while (count > 0)
            {
                r = count % 10;
                m = m + r;
                count = count / 10;
            }

            cout << m << endl;
        }
        else
        {
            cout << (-1) << endl;
        }
    }

    return 0;
}
