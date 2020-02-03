#include<stdio.h>
#include<string.h>
int main()
{
    char a[51];
    int i,T,l,n;
    scanf("%d",&T);
    while(T--)
    {
    scanf(" %[^\n]",a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]=='L')
        {
            printf("%c",a[i-1]);
        }

        if(a[i]=='R')
        {
            printf("%c",a[i+1]);
        }

        if(a[i]>='0' && a[i]<='9')
        {
            printf("%c",a[i]);
        }
    }
    printf("\n");
  }
    return 0;
}
