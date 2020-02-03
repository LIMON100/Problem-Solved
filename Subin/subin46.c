#include<stdio.h>
#include<math.h>
int main()
{
   int s,a,c,b,T,m;
   double area;
   scanf("%d",&T);
   while(T--)
  {
   scanf("%d%d%d",&a,&b,&c);
   s=(a+b+c)/2;
   m=(s*(s-a)*(s-b)*(s-c));
   area=sqrt(m);
   printf("Area = %0.3lf\n",area);
  }
   return 0;
}

