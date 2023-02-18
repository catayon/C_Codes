#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while (t--)
	{
		int n;
		cin>>n;
		
		for (int i = n/3+1; i >=n/3; i--)
		{
			if (i*1+(i+1)*2==n)
			{
				cout<<i<<" "<<i+1<<endl;
				break;
			}
			else if ((i+1)*1+i*2==n)
			{
				cout<<i+1<<" "<<i<<endl;
				break;
			}
			else if (i*3==n)
			{
				cout<<i<<" "<<i<<endl;
				break;
			}
		}
	}
	
	return 0;
}
