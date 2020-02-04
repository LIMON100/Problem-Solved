#include<stdio.h>
#include<math.h>
int main()
{
    double n,p,c;
    while(scanf("%lf%lf",&n,&p)!=EOF)
    {
        c=pow(p,1/n);
        printf("%.0lf\n",c);
    }
    return 0;
}
