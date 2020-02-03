#include<stdio.h>
#include<string.h>
int main()
{
    char str[10001];
    int i,l,T;

    scanf("%d",&T);
    while(T--)
    {
    scanf(" %[^\n]",str);
    l=strlen(str);
    int count=0;

    for(i=0;i<=l;i++){
        if(str[i]!=' '){
            if(str[i]!='.' && str[i]!='\0')
            while(str[i]!=' ')
             i++;
             count++;
         }

        }
    printf("Count = %d\n",count);
    }
    return 0;
}

