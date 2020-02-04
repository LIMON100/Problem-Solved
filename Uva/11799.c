#include<stdio.h>
int main()
{
    int arr[1001],i,m,j,T,k,n,temp;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
    scanf("%d",&n);

     for(j=0; j<n; j++)
        scanf("%d",&arr[j]);

    for(j=0; j<n-1; j++)
    {
        for(k=j+1; k<n; k++)
        {

            if(arr[j]>arr[k])
            {
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
     }

     for(j=n-1; j>=n-1; j--)
     printf("Case %d: %d",i,arr[j]);

     printf("\n");
    }

    return 0;
}
