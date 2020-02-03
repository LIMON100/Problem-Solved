#include<stdio.h>
int main()
{
    int T,n,i;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d",&n);
    i=2;
    if(n%i==0)
    {
        printf("red\n");
    }
    else
    {
        printf("blue\n");
    }
    }
    return 0;
}
