#include <iostream>
using namespace std;
int main()
{
    int c2, c3, c5, c6;
    cin >> c2 >> c3 >> c5 >> c6;
    int c256 = 0, c32 = 0;

    if (c2 <= c5)
    {
        if (c2 <= c6)
        {
            c256 = c2;
            c2 = c2 - c2;
            c5 = c5 - c2;
            c6 = c6 - c2;
        }
        else
        {
            c256 = c6;
            c2 = c2 - c6;
            c5 = c5 - c6;
            c6 = c6 - c6;
        }
    }
    else
    {
        if (c5 <= c6)
        {
            c256 = c5;
            c2 = c2 - c5;
            c5 = c5 - c5;
            c6 = c6 - c5;
        }
        else
        {
            c256 = c6;
            c2 = c2 - c6;
            c5 = c5 - c6;
            c6 = c6 - c6;
        }
    }

    if (c2 <= c3)
    {
        c32 = c2;
    }
    else
    {
        c32 = c3;
    }

    cout << c256 * 256 + c32 * 32;

    return 0;
}
