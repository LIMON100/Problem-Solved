#include<stdio.h>
int main()
{
    int n,i,k,p,q;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        p=n/k;
        i=p/k;
        q=p+n+i;
        printf("%d\n",q);
    }
    return 0;
}

