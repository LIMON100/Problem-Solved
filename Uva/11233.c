#include<stdio.h>
#include<string.h>

int main()
{
    char s[21][21],sin[21][21],plu[21][21],s1[21][21];
    int i,j,t,l,n,l2,p,w,l1,k,q,m,count;

    scanf("%d%d",&l,&n);
    for(i=0;i<l;i++)
    {
        scanf(" %[^\n]",s[i]);
        l1=strlen(s[i]);
        k=0,m=0;
        for(j=0; s[i][j]!=l1; j++)
        {
            if(s[i][j]!=' ')
            {
                sin[i][k]=s[i][j];
                k++;
            }
           else
           {
               sin[i][k]='\0';
               break;
           }
        }

        for(p=k+1;s[i][p]!='\0';p++)
           {
               plu[i][m]=s[i][p];
               m++;
           }
           plu[i][m]='\0';
    }

    for(j=0;j<n;j++)
    {
        scanf("%s",s1[j]);
    }

    ///checking the singular string.
    for(i=0; i<n; i++)
    {
        l1=strlen(s1[i]);
        for(j=0; j<l; j++)
        {
            if(strcmp(s1[i],sin[j])==0)
            {
                printf("%s\n",plu[j]);
                l1=0;
            }
        }

            if(l1!=0)
            {
               for(j=l1-1; j>=l1-2; j--)
                 {
                  if(s1[i][j]=='y')
                   {
                     for(j=l1-2; j>=l1-2; j--)
                     {
                        if(s1[i][j]=='a' || s1[i][j]=='e' || s1[i][j]=='i' || s1[i][j]=='o' || s1[i][j]=='u')
                        {
                           for(q=0; q<l1; q++)
                           printf("%c",s1[i][q]);
                           printf("s\n");
                        }
                        else
                        {
                           for(q=0; q<l1-1; q++)
                           printf("%c",s1[i][q]);
                           printf("ies\n");
                        }
                     }

                    }

                     else if(s1[i][j]=='x' || s1[i][j]=='o' || s1[i][j]=='h' || s1[i][j]=='s')
                             {
                                for(j=l1-1;j>l1-2;j--)
                                for(q=0; q<l1; q++)
                                printf("%c",s1[i][q]);
                                printf("es\n");

                             }

                    else if(s1[i][j]=='r' || s1[i][j]=='k' || s1[i][j]=='l' || s1[i][j]=='t')

                        {
                            for(j=l1-1;j>l1-2;j--)
                            for(q=0; q<l1; q++)
                            printf("%c",s1[i][q]);
                            printf("s\n");

                        }

                    }

              }

         }

    return 0;
}

