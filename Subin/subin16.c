#include<stdio.h>
#include<string.h>
void print_reverse(char str[]);
int main()
{
    char s[1002],word[1002];
    int i,j,k,T;
    scanf("%d",&T);

    while(T--)
    {
    scanf(" %[^\n]",s);

    for(j=0,k=0; j<strlen(s); j++)
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

void print_reverse(char str[])
{
    int i;
    for(i=strlen(str)-1; i>=0; i--)
    {
           printf("%c",str[i]);
    }
    printf(" ");
}
