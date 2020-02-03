#include<iostream>
#include<stdio.h>
int main()
{
    int A[5],c[5],i,total,j,temp,count,N,K,P;
    char b[8];

    scanf("%d%d%d",&N,&K,&P);

    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    /*getchar();
    for(i=0; i<P; i++)
    {
        scanf("%c",&b[i]);

    }*/
    count=0;
    for(i=N-1,j=0; i>0; i--)
    {
        if(A[i]==1)
            {
                count++;
                c[j]=A[i];
                j++;
            }
            if(A[i]==0)
            {
                c[j]=A[i];
                j++;
            }
    }
    ///c[j]='\0';

    printf("%d\n",count);
    count=0;

    for(i=0; i<N; i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
        printf("%d ",c[i]);
    }

    /*for(i=0; i<N; i++)
    {
        printf("%d ",c[i]);
    }*/

    return 0;
}

