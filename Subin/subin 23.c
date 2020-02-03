#include<stdio.h>
#include<string.h>
int main()
{
    int T,j,i;
    char s[1000];

    scanf("%d",&T);

    for(i=0; i<T; i++)
    {
        scanf(" %[^\n]",s);
        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                printf("%d",s[j]-64);
            }
        }
        printf("\n");
    }
    return 0;
}
