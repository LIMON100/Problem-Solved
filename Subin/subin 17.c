#include <stdio.h>

int main()
{
    char sentence[1001];
    int i, vowel,T;
    scanf("%d",&T);
    while(T--)
    {

    scanf(" %[^\n]",sentence);
    vowel=0;

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if ((sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] ==
        'i' || sentence[i] == 'o' || sentence[i] == 'u') ||
        (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] ==
        'I' || sentence[i] == 'O' || sentence[i] == 'U'))
        {
            vowel = vowel + 1;
        }
    }

    printf("Number of vowels = %d\n", vowel);
  }
  return 0;
}

