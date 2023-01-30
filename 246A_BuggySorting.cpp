#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    if (t > 2)
    {
        for (int i = t; i >= 1; --i)
        {
            cout << i << endl;
        }
    }
    else
    {
        cout << (-1) << endl;
    }

    return 0;
}
