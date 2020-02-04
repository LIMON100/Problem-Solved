#include<stdio.h>
int main()
{
    int i,n,feynman;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }

        feynman=0;
        for(i=1;i<=n;i++)
        {
            feynman+=(i*i);
        }

        printf("%d\n",feynman);
    }
    return 0;
}
