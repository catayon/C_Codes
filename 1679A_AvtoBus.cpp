#include <cstdio>
using namespace std;

int main()
{
    int t;
    long long int n;
    scanf("%d", &t);
    for (long long int i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        if (n < 4 || n % 2 != 0)
        {
            printf("%d\n", -1);
        }
        else
        {
            long long int m = n / 2;
            printf("%lld %lld\n", (m + 2) / 3, m / 2);
        }
    }

    return 0;
}
