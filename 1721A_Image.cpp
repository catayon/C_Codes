#include <iostream>
using namespace std;

int main()
{
    int t, n, count2 = 0, count4 = 0;
    char a[4];

    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> a[0] >> a[1] >> a[2] >> a[3];

        int b[] = {0, 0, 0, 0};

        for (int j = 0; j < 4; j++)
        {
            if (a[0] == a[j])
            {
                b[0]++;
            }
            if (a[1] == a[j])
            {
                b[1]++;
            }
            if (a[2] == a[j])
            {
                b[2]++;
            }
            if (a[3] == a[j])
            {
                b[3]++;
            }
        }

        int sum = 0;

        for (int j = 0; j < 4; j++)
        {

            sum = sum + b[j];
        }

        if (sum == 16)
        {
            cout << 0 << endl;
        }
        else if (sum == 8 || sum == 10)
        {
            cout << 1 << endl;
        }
        else if (sum == 6)
        {
            cout << 2 << endl;
        }
        else if (sum == 4)
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
