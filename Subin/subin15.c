#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,j;
    char s[1001];
    scanf("%d",&T);
    while(T--)
    {
    scanf(" %[^\n]",s);
    int count[26]={0};
    for(j=0; j<strlen(s); j++)
    {
        if(s[j]>='A' && s[j]<='Z')
        {
            count[s[j]-'A']++;
        }
    }

    for(j=0; j<26; j++)
    {
        if(count[j]!=0)
        {
            printf("%d\n",count[j]);
        }
    }
    printf("\n");
 }
    return 0;
}
