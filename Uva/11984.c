#include<stdio.h>
int main()
{
    int t,i;
    int a,c,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
         scanf("%d%d",&c,&d);
         f = (9*c)/5.0+d;
         a = (f*5)/9.0;
         printf("Case %d: %0.2d\n",i,a);
    }
     return 0;
}
