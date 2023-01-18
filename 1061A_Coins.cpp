#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,cnt=0;
    cin>>n>>s;
    cnt=s/n;
    s=s-cnt*n;
    if (s==0)
    {
        cout<<cnt;
    }
    else
    {
        cout<<cnt+1;
    }
    return 0;
}
