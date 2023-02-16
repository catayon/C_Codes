#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	cin >> a;
	
	char s[200];
	cin >> s;

	if (a == 'R')
	{
		map<char, char> m;
		// m['q']='0';
		m['w'] = 'q';
		m['e'] = 'w';
		m['r'] = 'e';
		m['t'] = 'r';
		m['y'] = 't';
		m['u'] = 'y';
		m['i'] = 'u';
		m['o'] = 'i';
		m['p'] = 'o';

		// m['a']='0';
		m['s'] = 'a';
		m['d'] = 's';
		m['f'] = 'd';
		m['g'] = 'f';
		m['h'] = 'g';
		m['j'] = 'h';
		m['k'] = 'j';
		m['l'] = 'k';
		m[';'] = 'l';

		// m['z']='0';
		m['x'] = 'z';
		m['c'] = 'x';
		m['v'] = 'c';
		m['b'] = 'v';
		m['n'] = 'b';
		m['m'] = 'n';
		m[','] = 'm';
		m['.'] = ',';
		m['/'] = '.';

		for (int i = 0; i < strlen(s); i++)
		{
			cout << m[s[i]];
		}
	}
	else
	{
		map<char, char> m;
		m['q'] = 'w';
		m['w'] = 'e';
		m['e'] = 'r';
		m['r'] = 't';
		m['t'] = 'y';
		m['y'] = 'u';
		m['u'] = 'i';
		m['i'] = 'o';
		m['o'] = 'p';
		// m['p']='o';

		m['a'] = 's';
		m['s'] = 'd';
		m['d'] = 'f';
		m['f'] = 'g';
		m['g'] = 'h';
		m['h'] = 'j';
		m['j'] = 'k';
		m['k'] = 'l';
		m['l'] = ';';
		// m[';']='l';

		m['z'] = 'x';
		m['x'] = 'c';
		m['c'] = 'v';
		m['v'] = 'b';
		m['b'] = 'n';
		m['n'] = 'm';
		m['m'] = ',';
		m[','] = '.';
		m['.'] = '/';
		// m['/']='/';

		for (int i = 0; i < strlen(s); i++)
		{
			cout << m[s[i]];
		}
	}

	return 0;
}
