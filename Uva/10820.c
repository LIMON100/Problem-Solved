#include<stdio.h>
int main()
{
    int i,j,n,gcd,x,count;
    while(scanf("%d",&n)==1)
    {
            if(n==0)
            break;
            count=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2!=0 || j%2!=0)
            {

                count++;
            }
        }
    }

    printf("%d\n",count);
  }
    return 0;
}
