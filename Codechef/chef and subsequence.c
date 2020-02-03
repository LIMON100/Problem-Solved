#include<stdio.h>
int main()
{
    int a[10],K,j,N,sum=0,total,sum1=0,sum2=0,count=0,count1=0,count2=0,i;
    scanf("%d%d",&N,&K);
    if(N>30)
    {
        return 0;
    }

    for(i=0;i<N;i++)
    {
      scanf("%d",&a[i]);
    }

    for(i=0; i<N; i++)
    {
        if(i==0)
        {
            for(j=1;j<N;j++)
            {
                sum=sum+a[j]+a[i];
                if(sum<=4)
                {
                    count++;
                }
                sum=0;
            }
        }
        else if(i==1)
        {
            for(j=0;j<N;j=j+2)
            {
                sum1=sum1+a[j]+a[i];
                if(sum1<=4)
                {
                    count1++;
                }
                sum1=0;
            }
        }
        else if(i==2)
        {
            for(j=0;j<N-1;j++)
            {
                sum2=sum2+a[j]+a[i];
                if(sum2<=4)
                {
                    count2++;
                }
                sum2=0;
            }
        }
    }
    total=count+count1+count2;

    printf("%d",total+1);

    return 0;
}
