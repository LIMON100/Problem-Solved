#include<stdio.h>
int main()
{
    int n[2],count=0;
    long int fact=1;
    int i,j;
    for(i=0;i<2;i++)
    {
    scanf("%d",&n[i]);
    }
    for(j=0;j<2;j++)
    {
        if(n[j]=='!' && n[j]>='0' && n[j]<='9' && n[j]!=' ')
            count++;
    }
    printf("%d",count);
    /*for(i=1; i<=n; i=i+2)
    {
        fact=fact*i;
    }
    printf("%ld\n",fact);*/
    return 0;
}
