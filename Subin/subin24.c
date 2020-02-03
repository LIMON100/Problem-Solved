#include<stdio.h>
int main()
{
    int i,T,j,n,k,num[100];
    scanf("%d",&T);

    for(i=1; i<=T;i++)
    {
        scanf("%d",&n);
         for(j=0; j<n; j++)
        {
            scanf("%d",&num[j]);
        }
        printf("Set %d:", i);
        for(k=0; k<n; k=k+2)
        printf(" %d ",num[k]);

        printf("\n");
    }
    return 0;
}
