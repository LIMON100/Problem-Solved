#include<stdio.h>
int main()
{
    int T,n,i,j,a[21];
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&n);

        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }

        for(j=n/2; j>=n/2; j--)
            printf("Case %d: %d\n",i,a[j]);
    }
    return 0;
}
