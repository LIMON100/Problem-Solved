#include<stdio.h>
int main()
{
    int T,n,i,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
       long long int fact=1;
        for(j=2;j<=n;j++)
        {
            fact=fact*j;
        }
        printf("%lld\n",fact);
    }
    return 0;
}
