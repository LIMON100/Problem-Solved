#include<stdio.h>
int main()
{
    int t,i,a[101],n;
    scanf("%d",&t);

    while(t--)
    {
        int count=0,p=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1])
            {
               count++;
               break;
            }
        }
        if(count>0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
