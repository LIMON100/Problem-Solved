#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int i=1,j,l,count,flag,T,count2,sp,count1,total;
    scanf("%d",&T);
    getchar();
    for(i=1; i<=T; i++)
    {

    gets(s);
    count=0,count1=0,count2=0,sp=0,flag=0,sp=0;
    l=strlen(s);

    for(j=0; j<l; j++)
    {
        if(s[j]>='a' && s[j]<='z' || s[j]==' ')
        {

          if(s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j' || s[j]=='m' || s[j]=='p' || s[j]=='t' || s[j]=='w')
            {
                count=count+1;
            }

            else if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k' || s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x')
            {
                flag=flag+2;
            }

            else if(s[j]=='c' || s[j]=='f' || s[i]=='i' || s[j]=='l' || s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y')
            {
                count1=count1+3;
            }

            else if(s[j]=='s' || s[j]=='z')
            {
                count2=count2+4;
            }

             else if(s[j]==' ')
            {
                sp++;
            }

        }
     }

         total=count+count1+count2+flag+sp;
         printf("Case #%d: %d\n",i,total);
         i++;

    }
    return 0;
}
