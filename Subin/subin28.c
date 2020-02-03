#include<stdio.h>
int main()
{
    int i,T,n,a[20],sorted;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sorted=1;
        for(i=1; i<n; i++)
        {
            if(a[i]<a[i-1])
            {
                sorted=0;
                break;
            }
        }
        if(sorted==1)
         {
            printf("YES");
            printf("\n");
         }

            else
            {
            printf("NO");
            printf("\n");
            }
    }
    return 0;
}
