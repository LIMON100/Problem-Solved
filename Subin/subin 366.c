#include<stdio.h>
#include<string.h>
int main()
{
   char s1[20]="x-ray";
   char s2[20]="apple";
   char s3[20]="cat";
   char s4[20]="bat";
   char s5[20]="house";
   char ch1,ch3,ch2,ch4,ch5;
   int i,l1,l2,l3,l4,l5,T;
   l1=strlen(s1);
   for(i=0; i<l1; i++)
   {
       ch1=s1[0];
       break;
   }
      l2=strlen(s2);
   for(i=0; i<l2; i++)
   {
       ch2=s2[0];
       break;
   }
    l3=strlen(s3);
   for(i=0; i<l3; i++)
   {
       ch3=s3[0];
       break;
   }
      l4=strlen(s4);
   for(i=0; i<l4; i++)
   {
       ch4=s4[0];
       break;
   }
      l5=strlen(s5);
   for(i=0; i<l5; i++)
   {
       ch5=s5[0];
       break;
   }
   int arr[5]={ch1,ch2,ch3,ch4,ch5};

   int j,k,swap;

   for(i=0; i<=4; i++)
   {
       for(j=0; j<5-i-1; j++)
       {
         if(arr[j]>arr[j+1])
         {
            swap       = arr[j];
            arr[j]   = arr[j+1];
            arr[j+1] = swap ;
         }
       }
   }
   for(j=0; j<5; j++)
    {

    switch(arr[j]){
            case 'a': printf("%s\n",s2);
            break;
            case 'x':printf("%s\n",s1);
            break;
            case 'c': printf("%s\n",s3);
            break;
            case 'b':printf("%s\n",s4);
            break;
            case 'h':printf("%s\n",s5);
            break;
    }
  }
    return 0;
}
