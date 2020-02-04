#include<stdio.h>
int main()
{
    long long int s,d,sum,diff;
    int T;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%lld%lld",&s,&d);
    sum=0;
    sum=(s+d)/2;
    if(s>d)
    {
        diff=s-sum;
    }
    else
    {
        diff=d-sum;
    }
    if(d>s || (s+d)%2!=0)
    {
        printf("impossible\n");
    }
    else
    {
        printf("%lld %lld\n",sum,diff);
    }
  }
    return 0;
}
