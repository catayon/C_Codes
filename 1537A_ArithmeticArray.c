#include<stdio.h>

int main()
{ 
    int n,t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n];
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < n; j++)
        {
            sum=sum+a[j];
        }
        if (sum==n)
        {
            printf("%d\n", 0);
        }
        else if (sum>n)
        {
            int t=sum-n;
            printf("%d\n", t);
        }
        else if (sum<n)
        {
            printf("%i\n", 1);
        }
    }   
    return 0;
}
