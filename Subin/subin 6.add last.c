#include<stdio.h>
int main()
{
    int T,i,p,final,mod;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        int n;
        scanf("%d",&n);
        p=n%10;
        while(n!=0)
        {
            mod=n%10;
            n=n/10;
        }
        final=p+mod;
        printf("Sum = %d\n",final);
    }
}
