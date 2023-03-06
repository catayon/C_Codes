#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, alice = 0, bob = 0, next = 1;
        cin >> n;

        for (ll i = 1; n >= next; i++)
        {
            if (i % 2 != 0)
            {
                alice += next;
                n -= next;
                next += 4;
            }
            else if (i % 2 == 0)
            {
                bob += next;
                n -= next;
                next += 4;
            }

            if (n < next)
            {
                if (i % 2 == 0)
                {
                    alice += n;
                    break;
                }
                else if (i % 2 != 0)
                {
                    bob += n;
                    break;
                }
            }
        }
        cout << alice << " " << bob << endl;
    }

    return 0;
}
