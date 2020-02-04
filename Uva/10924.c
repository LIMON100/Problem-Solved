#include<stdio.h>
#include<string.h>
int main()
{
    char s[21];
    int a[26]={0},i,j,sum,sum1,flag,sum2;
    while(scanf("%s",s)!=EOF)
    {
        sum1=0,sum2=0,i=0;
        while(s[i]!='\0')
        {
            if(s[i]>='a' && s[i]<='z')
            {
            a[s[i]-'a']++;
            sum1=sum1+s[i]-96;
            i++;
            }

            if(s[i]>='A' && s[i]<='Z')
            {
            a[s[i]-'A']++;
            sum2=sum2+s[i]-64+26;
            i++;
            }
        }
        sum=sum1+sum2;
        flag=1;

        for(j=2; j<=sum/2; j++)
        {
            if(sum%j==0)
            {
                flag=0;
            }
        }

        if(flag==1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
