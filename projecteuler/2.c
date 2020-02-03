#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c,sum=0;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
        if(c%2==0)
        {
            sum=sum+c;
        }
    }

    printf("%d ",sum);
    return 0;
}
