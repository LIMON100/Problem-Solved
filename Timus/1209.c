#include<stdio.h>
int main()
{
    int a[]={1,1,0,1,0,0,1,0,0,0,1,0,0,0,0};
    int n,i,T;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d",&n);
    for(i=1; i<15; i++)
    {
        if(i==n-1)
        {
            printf("%d",a[i]);
            break;
        }
    }
    printf("\n");
    }
    return 0;
}
