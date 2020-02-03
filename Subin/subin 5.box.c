#include<stdio.h>
int main()
{
    int i,j,n,k,T;
    scanf("%d",&T);
    for(k=1;k<=T;k++){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        printf("*");
      }
      printf("\n");
    }
    printf("\n");
  }
      return 0;
}
