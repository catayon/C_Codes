#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b>>c;
        if (a==b+c)
        {
            cout<<"YES"<<endl;
        }
        else if (b==a+c)
        {
            cout<<"YES"<<endl;
        }
        else if (c==b+a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }   
    }
    return 0;
}
