#include<stdio.h>
int main()
{
    int n,i,T,sum;
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    if(sum==n)
        printf("yes\n");
    else
        printf("NO\n");
    return 0;
}
