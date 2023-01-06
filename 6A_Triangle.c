#include<stdio.h>
#include<string.h>

int main()
{ 
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int arr[5]={a,b,c,d};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    if (arr[0]+arr[1]>arr[2] || arr[0]+arr[1]>arr[3] || arr[1]+arr[2]>arr[3])
    {
        printf("TRIANGLE\n");
    }
    else if (arr[0]+arr[1]==arr[2] || arr[0]+arr[1]==arr[3] || arr[1]+arr[2]==arr[3])
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
