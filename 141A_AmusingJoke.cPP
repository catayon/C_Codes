#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count1[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int count2[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char s1[110];
    char s2[110];
    char s3[110];

    cin >> s1;
    int len1 = strlen(s1);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < len1; j++)
        {
            if (s1[j] == i + 65)
            {
                count1[i]++;
            }
        }
    }

    cin >> s2;
    int len2 = strlen(s2);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (s2[j] == i + 65)
            {
                count1[i]++;
            }
        }
    }

    cin >> s3;
    int len3 = strlen(s3);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < len3; j++)
        {
            if (s3[j] == i + 65)
            {
                count2[i]++;
            }
        }
    }

    int pass = 0;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] == count2[i])
        {
            pass++;
        }
    }
    
    if (pass >= 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
