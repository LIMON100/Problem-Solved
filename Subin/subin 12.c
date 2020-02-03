#include<stdio.h>
int main()
{
    int i,n,k=5,count,p,T,q;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&n);
        p=n/k;
        q=p/k;
        count=p+q;
        printf("%d\n",count);
    }
    return 0;
}
