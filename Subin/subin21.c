#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,j,l;
    char s[10001];
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf(" %[^\n]",s);
        l=strlen(s);
        for(j=l-1; j>=0; j--)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}
