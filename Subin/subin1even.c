#include<stdio.h>
int main()
{
    int T,i,j;
    int n[101];
    scanf("%d",&T);
    for(i=1; i<=T ;i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&n[j]);
        }
        for(i=0; i<3; i++)
        if(n[i]%2==0)
            {
                printf("even\n");
            }
            else
            {
                 printf("odd\n");
            }
       }
       return 0;
}
