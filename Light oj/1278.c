#include<stdio.h>
int main()
{
    int t,j,i,count;
    long long int n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        count=0;
        scanf("%lld",&n);
        for(j=2; j<=n; j++)
        {
            if(n%j==0 && j%2!=0)
            {
                count++;
            }
        }

        printf("Case %d: %d\n",i,count);
    }

    return 0;
}
