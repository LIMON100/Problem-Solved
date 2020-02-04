#include<stdio.h>
int primefact(long long int n){
    while(n!=1){
        if(n%2==0)
            n=n/2;
            else if(n%3==0)
                n=n/3;
                else if(n%5==0)
                    n=n/5;
                    else
                        return 0;
    if(n==1)
        return 1;
    }
}
int main()
{
    int arry[15005];
    long long int i;
    int p,j=0;

    for(i=1;i<=1000000000;i++)
    {
        p=primefact(i);
        if(p==1)
          {
            arry[j]=i;
            j++;
            }
    }
    /*for(i=0;i<j;i++)
        printf("%d ",arry[i]);
     */
        ///printf("%d",j);
        printf("%lld",arry[150]);
    return 0;
}
