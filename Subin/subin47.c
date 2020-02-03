#include<stdio.h>
int main()
{
    int a[100001],b[100001],i,j,n1,n2,temp,T,count;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    count=0;
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(j=0;b[j]!='\0';j++)
    {
        a[count]=b[j];
        count++;
    }
    a[count]='\0';

    for(i=0;i<count;i++)
     {
         for(j=i+1;j<count;j++)
         {
             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }
     for(i=0;i<count;i++)
     {
         printf("%d ",a[i]);
     }
     printf("\n");
    }
     return 0;
}
