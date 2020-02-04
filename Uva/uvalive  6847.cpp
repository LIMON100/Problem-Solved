#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
       int n,r,i,k=5,p,m,flag[100],c,q;
        while(scanf("%d%d",&n,&r)!=0)
         {
           if(n==0 && r==0)
           {
               break;
           }
           c=0;

            for(i=n,m=0; i<=r; i++)
            {
                 p=i/k;
                 q=p/k;
                 flag[m]=p+q;
                 m++;
            }

           for(i=n; i<r; i++)
           {
             if(flag[i]!=flag[i+1])
             {
                 c++;
             }
           }

           printf("%d\n",c);

     }
    return 0;
}
