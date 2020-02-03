#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    for(i=1; i<1000; i++)
    {
        if(i%a==0 || i%b==0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}
