#include<stdio.h>
#include<math.h>
int main()
{
    int T,j,i,sq;
    long long int n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%llu",&n);
        unsigned long long int sum=0;
        sq=sqrt(n);
        for(i=1; i<=sq; i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
         if(sum==n)
                 printf("YES, %d is a perfect number!\n",n);
            else
                printf("NO, %d is not a perfect number!\n",n);
    }
    return 0;
}
