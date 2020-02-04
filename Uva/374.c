#include<stdio.h>

long long int mod(long long int b,long long int p,long long int m)
{
    long long int c;
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        c=mod(b,p/2,m);
        return ((c%m)*(c%m))%m;
    }
    if(p%2==1)
    {
        return ( (b%m)* mod(b,p-1,m) ) %m;
    }
}

int main()
{
    long long int b,p,m;
    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF)
    {
        printf("%lld\n",mod(b,p,m));
    }
    return 0;
}
