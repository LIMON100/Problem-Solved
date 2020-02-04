#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,i;
    string n,r,sum;
    ///scanf("%d",&t);

        gets(n);
        r=strrev(n);

        sum=n+r;
        r=strrev(sum);
        printf("%s",sum);
        /*if(strcmp(sum,r)==0)
        {
            printf("%s",r);
        }*/

    return 0;
}
