#include<stdio.h>
#include<string.h>

int main()
{ 
    int n;
    scanf("%d", &n);
    int len;
    char s[500];
    char big[100]="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s);
        len=strlen(s);
        if (strstr(big,s)!=NULL)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    } 
    return 0;
}
