#include<stdio.h>

int main()
{
    int a[10],i,kase,n,T;

    scanf("%d",&T);
    if(T>10)
    {
        return 0;
    }

    for(kase=1; kase<=T; kase++)
    {
        int b[10]={0,1,2,3,4,5,6,7,8,9};
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(a[i]>=1 && a[i]<=9)
            {
                if(a[i]==a[i+1])
                {
                    printf("%d\n",b[i+1]);
                    break;
                }
                else if(a[i]<a[i+1])
                {
                    printf("%d\n",a[i]);
                    break;
                }
            }
        }
    }

    return 0;
}
