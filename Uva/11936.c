#include<stdio.h>
int main()
{
    int T,n,a,b,c,sum;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b;
        if(sum<=c || a==0 || b==0 || c==0)
        {
            printf("Wrong!!\n");
        }
        else if(sum>c)
        {
            printf("OK\n");
        }
    }

    return 0;
}
