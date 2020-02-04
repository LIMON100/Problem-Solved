#include<stdio.h>
int main()
{
    int n,a[50],i,avg,sum,t=1,sum1;
    while(scanf("%d",&n)==1)
    {
        sum=0,sum1=0;
        if(n==0)
        {
            break;
        }

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }

        avg=sum/n;

        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
            {
                sum1=sum1+(a[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",t,sum1);
        printf("\n");
        t++;
    }

    return 0;

}
