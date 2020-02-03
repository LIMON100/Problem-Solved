#include<stdio.h>
int main()
{
    int p,q,c,j,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&p,&q,&c);
        int temp=1;
        for(j=1; j<=q; j++)
        {
            temp=(temp*p)%c;
        }
        printf("Result = %d\n",temp);
    }
    return 0;
}
