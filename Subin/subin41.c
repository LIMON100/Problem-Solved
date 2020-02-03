#include<stdio.h>
long long int fact(long long int n)
{
    long long int i,product=1;
    for(i=1; i<=n; i++)
    {
        product=product*i;
    }
    return product;
}

int main()
{
    int T;
    long long int n,i;
    scanf("%d",&T);
    double sum;
    while(T--)
    {
        scanf("%ld",&n);
        for( i=1; i<=n; i++)
        {
            sum=0.0;
            for(i=1; i<=n; i++)
            {
                sum+=((double)i/fact(i));
            }
        }
        printf("%0.4lf\n",sum);
    }
    return 0;
}
