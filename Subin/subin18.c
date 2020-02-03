#include<stdio.h>
int main()
{
    int T,i,j;
    char sentence[10001];
    scanf("%d",&T);

    while(T--)
    {
        scanf(" %[^\n]",sentence);
        for(i=0; sentence[i]!='\0'; i++)
        {
          if ((sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] ==
            'i' || sentence[i] == 'o' || sentence[i] == 'u') ||
            (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] ==
            'I' || sentence[i] == 'O' || sentence[i] == 'U'))
            {
                printf("%c",sentence[i]);
            }
        }
        printf("\n");

          for(i=0; sentence[i]!='\0'; i++)
            {
                if ((sentence[i]!= 'a' && sentence[i]!= 'e' && sentence[i]!=
            'i' && sentence[i]!= 'o' && sentence[i]!= 'u') &&
            (sentence[i]!= 'A' && sentence[i]!= 'E' && sentence[i]!=
            'I' && sentence[i]!= 'O' && sentence[i]!= 'U' && sentence[i]!=' '))
            {
                printf("%c",sentence[i]);
            }
         }
            printf("\n");
        }
    return 0;
}
