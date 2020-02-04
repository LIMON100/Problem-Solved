#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
        return(1);
    return(fib(n-1)+fib(n-2));
}
int main()
{
    int fib(int);
    int i,n;
    printf("enter how many terms of fibonacci series you want to see :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\t",fib(i));
    }
    return 0;
}
