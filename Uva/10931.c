#include<stdio.h>
int main()
{
    int deci,T,d;
    long long int n,m;
    while(scanf("%d",&deci)==1)
    {
     if(deci==0)
     {
         break;
     }
    n=0;
    d=deci;
    int i=1,r,count,re;
    while(d!=0)
    {
        r=d%2;
        d=d/2;
        n=n+(r*i);
        i=i*10;
    }
    count=0;
   if(n==10 || n==1)
   {
       printf("The parity of %lld is 1 (mod 2).\n",n);
   }
   if(n==11)
   {
       printf("The parity of %lld is 2 (mod 2).\n",n);
   }

    if(n>11)
   {
    m=n;
    while(m!=10)
    {
        re=m%10;
        count++;
        m=m/10;
    }
    printf("The parity of %lld is %d (mod 2).\n",n,count);
   }
 }
    return 0;
}
