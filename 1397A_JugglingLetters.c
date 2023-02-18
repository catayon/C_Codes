#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;

        int no=0,yes=1;
        char s[1000];
        int count[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        
        for (int j = 0; j < t; j++)
        {
            cin>>s;

            int len=strlen(s);
            for (int z = 0; z < 26; z++)
            {
                for (int k = 0; k < len; k++)
                {
                    if (s[k]==z+97)
                    {
                        count[z]++;
                    }
                }
            }
        }

        for (int z = 0; z < 26; z++)
        {
            if (count[z]%t==0)
            {
                yes++;
            }
            else
            {
                no=1;
                break;
            }   
        }
        
        if (no==1)
        {
            cout<<"NO"<<endl;
        }
        else if (yes>=1)
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
