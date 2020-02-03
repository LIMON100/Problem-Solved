#include<stdio.h>

int main()
{
    int T,n,A[20],b[10],f,count,temp,N,B[10],i,j;

    scanf("%d",&N);
    if(N%2==0)
    {
        return 0;
    }
    count=0;
    f=0;

    for(i=0; i<(2*N); i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=1,j=1; i<(2*N)-1; i=i+2)
    {
        if(A[i]<A[i+1])
        {
            temp=A[i+1];
            A[i+1]=A[i];
            A[i]=temp;
            b[j]=A[i];
            j++;
        }
        else
        {
            f++;
        }

    }

    if(N==1)
    {
        for(i=0; i<(2*N); i++)
        {
            if(A[i]>A[i+1])
            {
                printf("%d\n",A[i]);
                break;
            }
            else
            {
                printf("%d\n",A[i+1]);
                break;
            }
        }
    }

     for(i=1; i<(2*N); i=i+2)
      {
          b[i]=A[i];
          count++;
          printf("%d ",b[i]);

      }
    printf("\n");


            for(i=(count/2)+1; i>=2; i--)
            {
                printf("%d",b[i]);

            }



    /*for(i=0; i<(2*N); i++)
    {
        printf("%d ",A[i]);
    }*/

    return 0;
}
