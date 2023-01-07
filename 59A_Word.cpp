#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int up=0,low=0;
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        if (a[i]>=97 && a[i]<=122)
        {
            low++;
        }
        if (a[i]>=65 && a[i]<=90)
        {
            up++;
        }
    }
    if (low>=up)
    {
        for (int i = 0; i < len; i++)
        {
            if (a[i]>=65 && a[i]<=90)
            {
                a[i]=a[i]+32;
            }
        } 
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (a[i]>=97 && a[i]<=122)
            {
                a[i]=a[i]-32;
            }
        } 
    }
    cout<<a;
    return 0;
}
