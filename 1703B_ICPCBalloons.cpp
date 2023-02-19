#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, balloons = 0;
		cin >> n;
		vector<char> a(n);
		vector<int> b(26, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (b[a[i] - 65] == 0)
			{
				balloons++;
				balloons++;
				b[a[i] - 65]++;
			}
			else
			{
				balloons++;
				b[a[i] - 65]++;
			}
		}
		cout << balloons << endl;
	}

	return 0;
}
