#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, d;
	cin >> n >> d;

	vector<int> v(n);
	int singing_time = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		singing_time = singing_time + v[i];
	}

	singing_time = singing_time + (n - 1) * 10;

	if (singing_time > d)
	{
		cout << (-1);
	}
	else
	{
		int jokes = 0;
		jokes = ((n - 1) * 10 + d - singing_time) / 5;
		cout << jokes;
	}

	return 0;
}
