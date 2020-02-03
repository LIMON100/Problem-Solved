#include<stdio.h>
#include<string.h>

int main()
{
    int i,T,j,N;
    char s[101];
    scanf("%d",&T);
    if(T>20)
    {
        return 0;
    }

    for(i=1;i<=T;i++)
    {
        scanf("%s",s);
        N=strlen(s);

        if(N>100)
        {
            break;
        }

        for(j=0;j<1;j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                if(s[j]=='C')
                 printf("yes\n");

                 else
                 {
                     printf("no\n");
                 }
            }
        }

    }

    return 0;
}
