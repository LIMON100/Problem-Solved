#include<stdio.h>
int main()
{
    int i,j,row,cr,cp,c;
    cr=5;
    for(row=5;row>=1;row--){
        for(cp=1;cp<=cr-row;cp++){
            printf(" ");
        }
        for(c=1;c<=(2*row)-1;c++){
            printf("c");
        }
        printf("\n");
    }
    for(row=2;row<=cr;row++){
        for(cp=cr-row;cp>=1;cp--){
            printf(" ");
        }
        for(c=1;c<=((row*2)-1);c++){
            printf("c");
        }
        printf("\n");
    }
    return 0;
}
