#include<stdio.h>
#include<string.h>

void print_reverse(char str[])
{
    int i;
    for(i=strlen(str)-1; i>=0; i--)
    {
            printf("%c",str[i]);
    }
    printf(" ");
}
int main()
{
    int i,T,k,j;
    char s[1000],word[1000];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf(" %[^\n]",s);
        for(j=0,k=0;j<strlen(s);j++)
        {
           if(s[j]!=' ')
           {
               word[k]=s[j];
               k++;
           }
           else if(k>0)
           {
               word[k]='\0';
               print_reverse(word);
               k=0;
           }
        }
        if(k>0)
        {
            word[k]='\0';
            print_reverse(word);
            printf("\n");
        }
    }
    return 0;
}
