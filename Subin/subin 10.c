#include<stdio.h>
int main()
{
    int r1,r2,B,T,played_ball;
    double current_rr,asking_rr;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&r1,&r2,&B);
        played_ball=300-B;
        current_rr=(r2*1.0/played_ball)*6;
        asking_rr=(((r1*1.0)-(r2*1.0)+1)/B)*6;
        printf("%0.2lf %0.2lf\n",current_rr,asking_rr);
    }
    return 0;
}
