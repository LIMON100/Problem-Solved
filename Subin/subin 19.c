#include<stdio.h>

int main()
{
    int i,T,j;
    char s[10001];
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
       scanf(" %[^\n]",s);
         int count=0;
     for(j=0; s[j]!='\0'; j++)
    {
        if(s[j]==' ')
        {
            count++;
        }
    }
    printf("Count = %d\n",count+1);
    }
    return 0;
}
