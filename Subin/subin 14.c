#include<stdio.h>
#include<string.h>
int main()
{
    char s[10002];
    char ch[2];
    int i,j,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
    scanf(" %[^\n]",s);
    scanf("%s",ch);

    int count=0;

    for(j=0; j<strlen(s); j++)
    {
        if(ch[0]==s[j])
        {
            count++;
        }
   }
   if(count!=0)
   {
    printf("Occurrence of '%c' in '%s' = %d\n",ch[0],s,count);
   }
   else
  {
    printf("'%c' is not present\n",ch[0]);
   }
  }
    return 0;
}
