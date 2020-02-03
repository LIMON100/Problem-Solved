#include<stdio.h>
int main()
{
    int i,sum,sum1=0,multi,sum2=0,j;

    for(i=1;i<=100;i++)
    {
        sum1=sum1+(i*i);
        sum2=sum2+i;
    }

    multi=sum2*sum2;

    printf("%d ",multi-sum1);
    return 0;

}
