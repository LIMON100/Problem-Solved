#include<stdio.h>
int main()
{
    long long int sum=0,count=0,j;
    int i;
    for(i=500;i<=10000000;i++)
    {
        sum=sum+i;
        j=1;
        while(j<=sum)
        {
            if(sum%j==0)
            {
                count++;
            }
            if(count==500)
            {
                printf("%lld\n",sum);
                break;
            }
                j++;
        }
    }
    return 0;
}
