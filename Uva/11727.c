#include<stdio.h>
int main()
{
    int a,b,c,i,T;
    float sto,hi,lo,n1,n2,n3,sum;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;

        n1=(sum)/a;
        n2=(sum)/b;
        n3=(sum)/c;

        if(n1>n2)
        {
            sto=n1;
            lo=n2;
        }
        else
        {
            sto=n2;
            lo=n1;
        }
        if(sto>n3)
        {
            hi=sto;
            if(lo>n3)
            {
                sto=lo;
                lo=n3;
            }
            else
            {
                sto=n3;
            }
        }
        else
         {
            hi=n3;
         }

        printf("Case %d: ",i);
         if(sto==n1)
         {
             printf("%d\n",a);
         }
         else if(sto==n2)
         {
             printf("%d\n",b);
         }
         else
         {
             printf("%d\n",c);
         }
    }

    return 0;
}
