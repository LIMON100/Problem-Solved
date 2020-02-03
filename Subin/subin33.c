#include<stdio.h>
int main()
{
    int T,a,b,n,c,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&c);
        for(i=a; i<=b; i++)
        {
            if(i%c==0)
                printf("%d\n",i);
        }
    }
    return 0;
}

