#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int l = s.length(), cnta = 0, cntb = 0, ind = 0;

	for (int i = 0; i < l - 1; i++)
	{
		cntb = 0;

		for (int j = 0; j < l - 1; j++)
		{
			if (s[i] == s[j] and s[i + 1] == s[j + 1])
			{
				cntb++;
			}
		}

		if (cntb > cnta)
		{
			cnta = max(cnta, cntb);
			ind = i;
		}
	}

	cout << s[ind] << s[ind + 1];

	return 0;
}
