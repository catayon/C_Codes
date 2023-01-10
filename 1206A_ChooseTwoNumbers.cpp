#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int na,nb,c;
    int p=0,q=0,cnta=0,cntb=0;
    cin>>na;
    int a[na];
    for (int i = 0; i < na; i++)
    {
        cin>>a[i];
    }
    cin>>nb;
    int b[nb];
    for (int i = 0; i < nb; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < na; i++)
    {
        for (int j = 0; j < nb; j++)
        {
            c=a[i]+b[j];
            cnta=0,cntb=0;
            for (int k = 0; k < na; k++)
            {
                if (c!=a[k])
                {
                    cnta++;
                } 
            }
            for (int k = 0; k < nb; k++)
            {
                if (c!=b[k])
                {
                    cntb++;
                } 
            }
            if (cnta==na && cntb==nb)
            {
                p=a[i];
                q=b[j];
                break;
            }
        }
    }
    cout<<p<<" "<<q<<endl;
    return 0;
}
