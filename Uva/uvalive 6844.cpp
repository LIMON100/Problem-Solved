#include<stdio.h>
#include<iostream>
using namespace std;

long factorial(int n)
{
    int c;
    long result=1;
    for(c=1; c<=n; c++)
    {
        result=result*c;
    }
    return result;
}

int main()
{
    int n,r,i,flag1,flag2,flag;
    long long fact;
    cin>>n>>r;
    flag1=0,flag2=0;

    for(i=0; i<=n; i++)
    {
        fact=factorial(n)/(factorial(i)*factorial(n-i));
        if(fact%2!=0)
        {
            flag1++;
        }
    }

    for(i=0; i<=r; i++)
    {
        fact=factorial(r)/(factorial(i)*factorial(r-i));
        if(fact%2!=0)
        {
            flag2++;
        }
    }

    flag=flag1+flag2;
    cout<<flag;
    return 0;
}
