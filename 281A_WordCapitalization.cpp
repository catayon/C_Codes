#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int len = a.length();
    if (a[0]>=97)
    {
        a[0]=a[0]-32;
    }
    cout<<a;
    return 0;
}
