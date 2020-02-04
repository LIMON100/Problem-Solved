#include<stdio.h>
int main()
{
    int n,p,q,i,j,T,sum,a[31],count;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&n,&p,&q);
        sum=0,count=0;

        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0; j<n; j++)
        {
            sum=sum+a[j];
            if(sum>q || count>=p)
                break;
                count++;
        }

        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
