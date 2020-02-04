#include<stdio.h>

int main()
{
    long long int n,p,ternary,m,r;
    while(scanf("%lld",&n)>=0)
    {
    if(n<0)
    {
        break;
    }

    r=1,ternary=0;
    p=n;

    while(p!=0)
    {
        m=p%3;
        p=p/3;
        ternary=ternary+(m*r);
        r=r*10;
    }

    printf("%lld\n",ternary);
    }
    return 0;
}
