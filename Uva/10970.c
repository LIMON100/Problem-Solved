#include<stdio.h>
int main()
{
    long int m,n,div,multi;
    int p=0;
    while(scanf("%ld%ld",&m,&n)!=EOF)
    {

    if(m>300 || n>300)
    {
        break;
    }

    else if(m==1 && n==1)
    {
        printf("%d\n",p);
    }

    else if(m%2==0 || n%2==0)
    {
        multi=(m*n)-1;
        printf("%ld\n",multi);
    }
    else
    {
        div=(m+n)-2;
        printf("%ld\n",div);
    }
    }
    return 0;
}
