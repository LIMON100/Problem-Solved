#include<stdio.h>
int main()
{
    int l,w,h,i,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d%d",&l,&w,&h);
        printf("Case %d: ",i);
        if(l<=20 && w<=20 && h<=20)
        {
            printf("good\n");
        }
        else
        {
            printf("bad\n");
        }
    }
    return 0;
}
