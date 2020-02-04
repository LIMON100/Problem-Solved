#include<stdio.h>
long long uva100(long long n)
{
    if(n==1)
        return 1;
    if(n&1)
        return uva100(3*n+1) + 1;
    else
        return uva100(n/2) + 1;
}
long long mxcycle(long long a,long long b)
{
    long long mx=0,cycle;
    while(a<=b){
        cycle=uva100(a);
        if(mx<cycle)
            mx=cycle;
            a++;
    }
    return mx;
}
int main()
{
    printf("%lld\n",mxcycle(1,10));
    return 0;
}
