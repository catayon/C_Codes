#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cr=0,cg=0,cb=0,cR=0,cG=0,cB=0;
    for (int i = 0; i < t; i++)
    {
        char a[10];
        cin>>a;
        
        cr=0,cg=0,cb=0,cR=0,cG=0,cB=0;
        for (int j = 0; j < 6; j++)
        {
            if (a[j]=='r')
            {
                cr=j;
            }
            if (a[j]=='g')
            {
                cg=j;
            }
            if (a[j]=='b')
            {
                cb=j;
            }
            if (a[j]=='R')
            {
                cR=j;
            }
            if (a[j]=='G')
            {
                cG=j;
            }
            if (a[j]=='B')
            {
                cB=j;
            }
            
        }

        if (cr<cR && cg<cG && cb<cB)
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
