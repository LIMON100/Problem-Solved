#include<stdio.h>
#include<string.h>
int main()
{
    char s1[127],s2[127];
    int i,T,j,l1,l2;
    scanf("%d",&T);
    while(T--)
    {
    scanf(" %[^\n]",s1);
    scanf(" %[^\n]",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0; i<=(l1-l2); i++)
    {
        if(s2[0]==s1[i])
        {
            for(j=1; j<l2; j++)
            {
                if(s2[j]!=s1[i+j])
                    break;
            }
            if(j==l2)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
 }
 return 0;
}
