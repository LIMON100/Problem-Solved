#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],s3[20][20],s4[20][20];
    int l1,l2,i,k,j,not,count,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf(" %[^\n]",s1);
    scanf(" %[^\n]",s2);

    l1=strlen(s1);
    l2=strlen(s2);
    count=0;
    not=0;
    for(i=0,k=0,j=0; i<l1; i++)
    {
        if(s1[i]!=' ')
        {
            s3[k][j]=s1[i];
            j++;
        }
        else
        {
            s3[k][j]='\0';
            k++;
            j=0;
        }
    }
    s3[k][j]='\0';

    for(i=0,k=0,j=0; i<l2; i++)
    {
        if(s2[i]!=' ')
        {
            s4[k][j]=s2[i];
            j++;
        }
        else
        {
            s4[k][j]='\0';
            k++;
            j=0;
        }
    }
    s4[k][j]='\0';

    for(i=0; i<k+1; i++)
    {
        for(j=0; j<k+1; j++)
        {
            if(strcmp(s3[i],s4[j])==0)
            {
                count++;
            }
            else
            {
                not++;
            }
        }
    }

    if(count>=2)
    {
        printf("similar\n");
    }
    else
    {
        printf("dissimilar\n");
    }
  }
    return 0;
}
