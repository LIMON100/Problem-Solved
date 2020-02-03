#include<stdio.h>
int main()
{
    int a,b,c,T,radius,bahu;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d %d %d",&a,&b,&c);
    if(a>101 || b>101 || c>101)
    {
        break;
    }

    radius=4*3.1416*(a*a);
    bahu=((b*b)+(c*c));

    if(bahu > radius)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
   }
    return 0;
}
