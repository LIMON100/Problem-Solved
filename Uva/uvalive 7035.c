#include<stdio.h>
int main()
{
    int a[101],i,j,n,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        int count=0;
        scanf("%d",&n);

        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }

        for(j=0; j<n; j++)
        {
            if(a[j]%3==0)
                count++;
        }

        if(count==n)
        {
            printf("Case #%d: Yes\n",i);
        }
        else
        {
            printf("Case #%d: No\n",i);
        }
    }

    return 0;
}
