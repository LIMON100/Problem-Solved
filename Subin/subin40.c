#include<stdio.h>
int main()
{
    int T,a,b,i,power,sum;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&a,&b);
        power=1,sum=1;
        for(i=1; i<=b; i++)
        {
            power=power*a;
            sum=sum+power;
        }
        printf("%d\n",sum);
    }
    return 0;
}
