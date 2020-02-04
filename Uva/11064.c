#include<stdio.h>
#include<iostream>
using namespace std;
int totient(int);
int div(int);

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<2)
            cout<<"0"<<endl;
        else
          cout<<n-totient(n)-div(n)<<endl;
    }
    return 0;
}

int totient(int n)
{
    int i,r=n;

    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            r=r-r/i;
        }
    }
    if(n>1)
        r=r-r/n;
    return r;
}

int div(int n)
{
    int r=1,d=2;
    for(;d*d<n;d++)
    {
        if(n%d==0)
        {
            r=r+2;
        }
    }
    if(d*d==n)
        r++;
    return r;
}
