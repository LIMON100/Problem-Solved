#include <stdio.h>
int main(){
   int n1,n2,n3,sto,hi,lo,i,T;
   scanf("%d",&T);
   for(i=1; i<=T; i++)
   {

   scanf("%d%d%d",&n1,&n2,&n3);

   if (n1>n2)
   {
      sto=n1;
      lo=n2;
   } else
   {
      sto=n2;
      lo=n1;
   }

   if (sto>n3)
    {
      hi=sto;
      if(lo>n3)
     {
         sto=lo;
         lo=n3;
      }
      else
      {
         sto=n3;
      }
   }
   else hi=n3;

   printf("Case %d: %d %d %d",i, lo,sto,hi);
   printf("\n");
   }
   return 0;
}
