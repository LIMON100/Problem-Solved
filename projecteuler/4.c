#include<stdio.h>

int reverse(int n)
{
    int r=0;
    while(n!=0)
    {
        r=r*10;
        r=r+n%10;
        n=n/10;
    }

    return r;
}

int main()
{
    int i,j,n,rev;
    long long multi;
    for(i=101; i<=999; i++)
    {
       for(j=101;j<=999;j++)
      {
            multi=i*j;
            rev=reverse(multi);
            if(multi==rev)
            {
                printf("%lld\n",multi);
            }
      }
    }

    return 0;
}
