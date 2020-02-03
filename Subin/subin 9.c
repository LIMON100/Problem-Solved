#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq_root,i;
    int T;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d",&n);
    if(n<0 || n>10000001)
    {
        break;
    }
    sq_root=sqrt(n);
    if(sq_root * sq_root == n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    }
    return 0;
}
