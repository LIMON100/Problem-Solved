#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,sq,multi,hi,lo,sto;
    while(scanf("%d%d%d",&a,&b,&c)!=0)
    {

        if(a==0 && b==0 && c==0)
        {
            break;
        }

        if(a>b)
        {
            sto=a;
            lo=b;
        }
        else
        {
            sto=b;
            lo=a;
        }

        if(sto>c)
        {
            hi=sto;

          if(lo>c)
          {
            sto=lo;
            lo=c;
          }
          else
          {
              sto=c;
          }
        }

        else
            hi=c;

            multi=(sto*sto)+(lo*lo);
            sq=sqrt(multi);

            if(sq!=hi || sq==1 || sq==2)
            {
                printf("wrong\n");
            }

            else if(sq==hi)
            {
                printf("right\n");
            }
    }
    return 0;
}
