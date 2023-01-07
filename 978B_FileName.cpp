#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    int cnt=0;
    cin>>n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-2; i++)
    {
        if (a[i]=='x')
        {
            if (a[i+1]=='x')
            {
                if (a[i+2]=='x')
                {
                    cnt++;
                }
            }
        } 
    }
    cout<<cnt;
    return 0;
}
