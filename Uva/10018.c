#include<stdio.h>
#include<string.h>

int reverse(int n)
{
   int r,res=0;
   while(n!=0)
   {
       r=n%10;
       res=r+res*10;
       n=n/10;
   }
   return res;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}
