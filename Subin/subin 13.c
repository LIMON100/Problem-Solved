#include<stdio.h>
#include<string.h>
int factorial(int m)
{
    if(m==0)
    return 1;
    else
    return m*factorial(m-1);
}
#include<string.h>
int main()
{
    int i,w,m,n,k,t,f,l,count,result;
    char str[1000];
    char str1[10][21];
    int flag[10]={1,1,1,1,1,1,1,1,1,1};
    scanf("%d",&t);
    while(t--)
    {
     scanf(" %[^\n]",str);
    count=0,result=0;
    w=1;
    m=0,n=0;
    for(i=0;i<strlen(str);i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
           str1[m][n]=str[i];
           n++;
           if(w==1)
           count++;
           w = 0;
        }
        else{
            w = 1;
            m++;
            n=0;
        }
        str1[m][n]='\0';
    }
    for(l=0;l<count;l++)
    {

        for(k=l+1;k<count;k++)
        {
           if(str1[k][0]!='0'){
           if(strcmp(str1[l],str1[k])==0)
            {
                flag[l]++;
                str1[k][0]='0';
            }
            }
        }
    }
    result=factorial(count);
    for(f=0;f<10;f++)
    {
        if(flag[f]!=1)
        result=result/factorial(flag[f]);
    }
    printf("1/%d\n",result);
  }
    return 0;
}
