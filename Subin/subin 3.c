#include<stdio.h>
int main()
{
    int row,cs,ct,n,c;
    n=7;
    for(row=7;row>=1;row--){
        for(cs=1;cs<=n-row;cs++){
            printf(" ");
        }
        for(c=1;c<=row;c++){
            printf("c");
        }
        printf("\n");
    }
    for(row=2;row<=n;row++){
        for(cs=n-row;cs>=1;cs--){
            printf(" ");
        }
        for(c=1;c<=row;c++){
            printf("c");
        }
        printf("\n");
    }
    return 0;
}


