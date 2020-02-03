#include <stdio.h>
#include <string.h>

int main()
{
   char a[100], b[100];
   int T;
   scanf("%d",&T);
   while(T--)
  {
   scanf(" %[^\n]",a);

   strcpy(b,a);
   strrev(b);

   if (strcmp(a,b) == 0)
    {
      printf("Yes! It is a palindrome!\n");
    }
   else
    {
      printf("Sorry! It is not a palindrome!\n");
    }
   }

   return 0;
}
