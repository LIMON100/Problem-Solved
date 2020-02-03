#include<stdio.h>
int main()
{
    int row,cs,c,n;
    n=20;
    c=2;
    for(row=1;row<=10;row++){
        for(cs=1;cs<=row;cs++){
            printf("c");
        }
        for(cs=n-c;cs>=1;cs--)
            printf(" ");
        for(cs=1;cs<=row;cs++){
            printf("c");
        }
    c+=2;
        printf("\n");
    }
    return 0;
}

