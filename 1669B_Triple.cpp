#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    int cnta=0;
    int cntb=0;
    int n;
    int max;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cntb=0;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        sort(a, a + n);
        for (int j = n; j > 0; j--)
        {
            if (a[j-1]==a[j] && a[j-2]==a[j])
            {
                max=a[j];
                break;
            }
            else
            {
                max=-1;
            }
        }
        cout<<max<<endl;  
    }
    return 0;
}
