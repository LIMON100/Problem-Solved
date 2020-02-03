#include<stdio.h>
#include<string.h>
int main()
{
    char arry[100001];
    int i,w,count;
    int T;
    scanf("%d",&T);
    while(T--){
    w==1;
    count=1;
    for(i=0;i<1;i++)
    {
        scanf(" %[^\n]",arry);
    }
    for(i=0;i<strlen(arry);i++)
    {
        if(arry[i]>='0'&& arry[i]<='9'||arry[i]=='-'|| arry[i]=='+')
            {
            if(w==1)
            count++;
            w=0;
        }
        else
        {
            w=1;
        }

    }
    printf("%d\n",count);
    }
    return 0;

}
