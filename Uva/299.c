#include<stdio.h>
int main()
{
    int n,t,a[51],j,i,temp,count;
    scanf("%d",&t);

    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    count++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",count);
    }

    return 0;
}
