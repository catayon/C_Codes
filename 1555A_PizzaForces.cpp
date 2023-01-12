#include <iostream>
using namespace std;

int main()
{
    long long int n,t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        if (t>6)
        {
            cout<<((t+1)/2)*5<<endl;
        }
        else
        {
            cout<<15<<endl;
        }
    }
    return 0;
}
