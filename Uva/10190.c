#include<stdio.h>
int main()
{
    long long int n,m,a[100000],p;
    int b=1,i,j;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        p=n;
        i=-1;
        while(n!=1)
        {
            if(n<=0 || m<=0 || n==1 || m==1 || m>n)
            {
                b=0;
                break;
            }

            if(n%m==0)
            {
                a[++i]=n/m;
                b=1;
            }

            else
            {
                b=0;
                break;
            }
            n=n/m;
        }
        if(b==1)
        {
            printf("%lld ",p);
            for(j=0; j<=i; j++)
            {
                printf("%lld ",a[j]);
            }
            printf("\n");
        }

        else if(b==0)
        {
            printf("Boring!\n");
        }
    }
    return 0;
}
