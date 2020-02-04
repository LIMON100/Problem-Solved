#include<bits/stdc++.h>
#include<string.h>
using namespace std;
char str[30];

int func(int x)
{
   char ch;
   for(int i=0; i<strlen(str); i++)
   {
       if(str[i]==ch)
       {
           printf("%c\n",str[i]);
       }
   }
}

void bisection(int a,int b)
{
    if(func(a)*func(b)>=0)
    {
        printf("This is not valid");
    }

    int c,d=1;

    while(d<=7)
    {
       c=(a+b)/2;

       if(c==r)
       {
           int count++;
       }

     else if(func(a)*func(c)<0)
       {
           b=c;
       }
       else
       {
           a=c;
       }
    }
    return count;
}

int main()
{
    int i,t,j,r;

    gets(str);

    scanf("%d",&r);

    for(i=0; i<10000; i++)
    {
        for(j=i+1; j<10000; j++)
        {
           bisection(i,j);
        }
    }*
    return 0;
}
