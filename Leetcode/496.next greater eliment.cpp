#include<iostream>
#include<stack>
#include<stdio.h>
using namespace std;
#define size 101
int a[size],top=-1;

void push1(int value)
{
  if(top>=size)
        printf("Failed\n");
  else
    {
      printf("%d ",value);
       a[++top]=value;
    }
    //printf("\n");
}

void push2(int value)
{
  if(top>=size)
        printf("Failed\n");
  else
    {
      printf("%d ",value);
       a[++top]=value;
    }
}
int main()
{
    int x,i,j,n,n1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",push1(i));
    }
    cin>>n1;
    for(i=0;i<n1;i++)
    {
        cin>>push2(i);
    }
    return 0;
}


