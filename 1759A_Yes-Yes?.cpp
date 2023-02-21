#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    char big[] = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    
    while (t--)
    {
        char s[55];
        cin >> s;
        int len = strlen(s);

        if (strstr(big, s) != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
