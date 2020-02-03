#include<stdio.h>
int main()
{
    int T,i,j,a,b,c,n;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d%d%d",&a,&b,&c);

    for(i=(a*b); i<=c; i=i+(a*b))
    {
            printf("%d\n",i);
    }
  }
    return 0;
}
