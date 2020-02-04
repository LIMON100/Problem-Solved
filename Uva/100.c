#include<stdio.h>
long long sum(long long n)
{
    if(n==1)
        return 1;
    else if(n&1)
        return sum(3*n + 1)+1;
    else
        return sum(n/2)+1;
}
long long mxcycle(long long a,long long b)
{
    if(a>b)
        return mxcycle(b,a);
    long long mx=0,cycle;
    while(a<=b){
        cycle=sum(a);
        if(mx<cycle)
            mx=cycle;
        a++;
    }
    return mx;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    printf("%lld %lld %lld\n",a,b,mxcycle(a,b));
    return 0;
}

