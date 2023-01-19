#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long int x1,x2,x3;
    long int y1,y2,y3;
    for (int i = 0; i < n; i++)
    {
        cout<<endl;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;

        int pass1=1,pass2=1;

        if (x1==x2 || x2==x3 || x3==x1)
        {
            pass1=0;
        }
        if (y1==y2 || y2==y3 || y3==y1)
        {
            pass2=0;
        }

        if (pass1==0 && pass2==0)
        {
            cout<<"NO";     
        }
        else
        {
            cout<<"YES";
        }
        
    }
    
    return 0;
}
