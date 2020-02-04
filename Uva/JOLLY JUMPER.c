#include<stdio.h>

int main()
{
    int i, count, b[1500], count1, temp, c, d;

    int flag;

    while(scanf("%d", &i)!=EOF){
    for(count=0;count<i;count++)
    {
        scanf("%d", &b[count]);
    }
    for(c = 0; c<i-1;c++){
        if(abs(b[c]-b[c+1])==1)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag)
    {
        printf("Jolly.\n");
    }
    else
    {
        printf("Not Jolly.\n");
    }
    }
    return 0;;
}

