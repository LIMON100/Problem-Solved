#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int i,j,T,k,m,o,n;
    double a[5]={0.25,0.50,0.75,1.00};
    double b[5]={0.25,0.50,0.75,1.00},multi[1000],c[1000];
    cin>>T;

    for(i=0; i<T; i++)
    {
        int flag=0,q=0,c=0;
        cin>>n;
        for(j=0,m=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
               multi[m]=(a[j]*b[k]*100);
               m++;
               q++;
            }

        }

        for(j=0; j<q; j++)
        {
           if(multi[j] != multi[j+1])
           {
               flag++;

           }
           else
           {
               c++;

           }
        }
        printf("\n");
        cout<<c;
    }

    return 0;
}
