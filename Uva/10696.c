#include<stdio.h>
int main()
{
    long long int N,n;
    while(scanf("%lld",&N)==1)
    {

     if(N==0)
      {
          break;
      }

    if(N>=101)
    {
        n=N-10;
        printf("f91(%lld) = %lld\n",N,n);
    }
    else
    {
        printf("f91(%lld) = 91\n",N);
    }
    }
    return 0;
}
