#include<stdio.h>
#include<string.h>

int main()
{ 
    int count1[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int count2[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char s1[10000];
    char s2[10000];
    char s3[10000];
    scanf("%s", &s1);
    int len1=strlen(s1);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j<len1; j++)
        {
            if (s1[j]==i+65)
            {
                count1[i]++;
            }  
        }  
    }
    scanf("%s", &s2);
    int len2=strlen(s2);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j<len2; j++)
        {
            if (s2[j]==i+65)
            {
                count1[i]++;
            } 
        }
    }
    scanf("%s", &s3);
    int len3=strlen(s3);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j<len3; j++)
        {
            if (s3[j]==i+65)
            {
                count2[i]++;
            }
        } 
    }
    int pass=0;
    for (int i = 0; i < 26; i++)
    {
        if (count1[i]==count2[i])
        {
            pass++;
        }
    }
    if (pass>=26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
