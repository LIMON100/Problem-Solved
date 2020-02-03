#include<stdio.h>
int main()
{
    int h1,h2,m2,m1,C,s1,s2,t,T,tali,hh,mm,ss;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d%d%d",&h1,&m1,&s1);
    scanf("%d%d%d",&h2,&m2,&s2);
    scanf("%d",&C);
    if(h2<10)
    {
        h2=h1+h2;
        m2=60+m2;
    }
    if((h1+h2)>2 || C>5)
    {
        break;
    }
    hh=((h2-h1)*60*60);
    mm=((m2-m1)*60);
    ss=(s2-s1);
    tali=(hh*C)+(mm*C)+(ss*C);
    printf("%d\n",tali);
    }
    return 0;
}
