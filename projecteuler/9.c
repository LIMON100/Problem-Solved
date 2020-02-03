#include<stdio.h>
#include<math.h>
int j=1;
int main()
{
    int i,j,sum,sum1,n=1000;
    for(i=1;i<=sqrt(n);i++)
    {
        sum=(i*i)+((i+1)*(i+1));
        j=i+2;
        sum1=(j*j);
        printf("%d %d %d=%d\n",i,i+1,j,sum1+sum);
        if(sum+sum1==n)
        {
            printf("%d %d %d\n",i,i+1,j);

        }
    }
    return 0;
}
