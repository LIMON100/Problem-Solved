#include<stdio.h>
int main()
{
    int i,j;
    int n=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
    printf("\n");
    }
    for(i=2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
