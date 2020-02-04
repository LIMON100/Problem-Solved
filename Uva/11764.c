#include<stdio.h>
int main()
{
    int i,j,T,a[101],k,n,hi,lo;
    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%d",&n);
        hi=0,lo=0;

        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }

        for(j=0; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
              if(a[j]>a[k])
                {
                    lo++;
                }
               else if(a[j]<a[k])
                {
                    hi++;
                }
                break;
            }
        }

       printf("Case %d: %d %d\n",i,hi,lo);
    }

    return 0;
}
