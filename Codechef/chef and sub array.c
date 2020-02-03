#include<stdio.h>

int main()
{
    int A[101],i,f=0,mini,loc,j,temp,count,N,K,P;
    char b[4];

    scanf("%d%d%d",&N,&K,&P);
    if(N>1000 || N<1 || K>1000 || P>1000)
    {
        return 0;
    }

    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    //getchar();
    for(i=0; i<P; i++)
    {
        scanf("%c",&b[i]);

    }

    count=0;
    for(i=N-1; i>0; i--)
    {
        if(A[i]==1)
            {
                count++;
            }
            if(A[i]==0)
            {
                f++;
            }
    }

    printf("%d\n",count);
    count=0;

    for(i=0; i<(N-1); i++)
    {
        mini=A[i];
        loc=i;
        for(j=i+1; j<N; j++)
        {
            if(A[j] > mini)
            {
                mini=A[j];
                loc=j;
            }
        }

       temp=A[i];
       A[i]=A[loc];
       A[loc]=temp;

    }

    for(i=0; i<N; i++)
    {
        if(A[i]==1)
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
