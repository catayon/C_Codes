#include<stdio.h>
#include<string.h>

int main()
{ 
    int n,t,count[30];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        int no=0,yes=1;
        char s[1000];
        int count[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for (int j = 0; j < t; j++)
        {
            scanf("%s", &s);
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
            printf("NO\n");
        }
        else if (yes>=1)
        {
            printf("YES\n");
        }
    }
    return 0;
}
