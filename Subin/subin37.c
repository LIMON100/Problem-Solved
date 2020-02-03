#include<stdio.h>
int main()
{
    int n,T,rev,i,temp;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&n);
        rev=0;
        while(n!=0)
        {
            rev=rev*10;
            rev=rev+n%10;
            n=n/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}
