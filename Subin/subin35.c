#include<stdio.h>
#include<math.h>
int main()
{
    int T,p,sq,i,a,b,c,d,r;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d%d",&a,&b);
    scanf("%d",&r);
    scanf("%d%d",&c,&d);
    p=((c-a)*(c-a)+(d-b)*(d-b));
    sq=sqrt(p);
    if(sq > r)
    {
        printf("The point is not inside the circle\n");
    }
    else
    {
        printf("The point is inside the circle\n");
    }
}
    return 0;
}
