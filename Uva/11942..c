#include<stdio.h>
int main()
{
    int n,T,i,a[101],count,flag;
    scanf("%d",&T);
    printf("Lumberjacks:\n");
    while(T--)
    {
        for(i=0; i<10; i++)
        {
            scanf("%d",&a[i]);
        }

        count=0,flag=0;
        for(i=0; i<10; i++)
        {
            if(a[i]>a[i+1])
            {
                count++;
            }

            else if(a[i]<a[i+1])
            {
                flag++;
            }
        }

            if(count==10 || count==9 || flag==10)
            {
                printf("Ordered\n");
            }

            else
            {
                printf("Unordered\n");
            }

    }
    return 0;
}
