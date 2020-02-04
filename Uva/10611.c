#include<stdio.h>
int main()
{
    int a[10000],b[1000],j,i,ans,ans1,search,n,q;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&b[i]);
    }

   for(i=0; i<q; i++)
   {
       ans=0,ans1=0;
       search=b[i];
       for(j=0;j<n;j++)
       {
           if(a[j]<search)
           {
               ans=a[j];
           }
       }

       for(j=0;j<n;j++)
       {
           if(a[j]>search)
           {
               ans1=a[j];
               break;
           }
       }

       if(ans!=0 && ans1!=0)
        {
           printf("%d %d\n",ans,ans1);
        }

        else if(ans==0 && ans1!=0)
        {
           printf("X %d\n",ans1);
        }

        else if(ans!=0 && ans1==0)
        {
            printf("%d X\n",ans,ans1);
        }
   }

    return 0;
}
