#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,j,flag;
    char s[2000];
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
    flag=0;
    for(j=0; j<26; j++)
    {
        flag=1;
        if(count[j]!=0)
        {
            for(i=2; i<=(count[j]/2); i++)
            {
                if(count[j]%i==0)
                {
                  flag=0;
                  flag++;
                }
            }

             if(flag==1 && count[j]!=1)
                {
                     printf("%c",'A'+j);
                }
        }

          else if(flag!=1 && count[j]==1)
            {
                printf("empty\n");
            }
    }
     printf("\n");
  }
    return 0;
}
