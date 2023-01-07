//Polycarp's Pockets
//07.01.2023

#include<iostream>
using namespace std;
int main()
{
    int n,cnta,cntb,max=0;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cnta = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i]==a[j])
            {
                cnta++;
            }
        
        }
        b[i]=cnta; 
    }
    for (int i = 0; i < n; i++)
    {
        if (max<b[i])
        {
            max=b[i];
        }
    }
    cout<<max;
    return 0;
}
