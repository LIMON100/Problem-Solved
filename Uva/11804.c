#include<stdio.h>
#include<string.h>
int main()
{
    char name[21][21];
    int i,j,n1[100],sum=0,temp,n2[100],n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s%d%d",name[i],&n1[i],&n2[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(n1[i]>n1[j])
            {
                temp=n1[i];
                n1[i]=n1[j];
                n1[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(n2[i]>n2[j])
            {
                temp=n2[i];
                n2[i]=n2[j];
                n2[j]=temp;
            }
        }
    }
    for(i=n; i>0; i--)
    {
         printf("%d %d\n",n1[i],n2[i]);
    }

    return 0;
}
