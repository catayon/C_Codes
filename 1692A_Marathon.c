//1692A
//Marathon

#include<stdio.h>

int main()
{ 
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a[4];
        int count=0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 1; j < 4; j++)
        {
            if (a[0]<a[j])
            {
                count++;
            }
        }
        printf("%d\n", count);  
    }
    return 0;
}
