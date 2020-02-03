#include<stdio.h>
int main()
{
    int i,j;
    int n=7;
     for(i=1;i<=n;i++){
        for(j=7;j>=i;j--){
             printf("c");
        }
        printf("\n");
     }
     for(i=2;i<=7;i++){
        for(j=1;j<=i;j++){
             printf("c");
        }
        printf("\n");
     }
     return 0;
}
