#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],ch,ch1,ch2;
    int i,l;

    while(gets(s)!=EOF)
    {
        l=strlen(s);
         ch=39;
         ch1=92;
         ch2=94;

        for(i=0; i<l; i++)
        {
            if(s[i]=='1')
                printf("*");

            else if(s[i]=='J')
                printf("C");

             else if(s[i]=='K')
                printf("D");

             else if(s[i]-0==ch)
                printf(" ");

            else if(s[i]=='p')
                printf("i");

                else if(s[i]=='z')
                printf("s");

                 else if(s[i]=='{')
                printf("t");

                 else if(s[i]=='o')
                printf("h");

                 else if(s[i]=='l')
                printf("e");

                else if(s[i]=='z')
                printf("s");

                else if(s[i]=='y')
                printf("r");

                else if(s[i]=='h')
                printf("a");

                else if(s[i]=='k')
                printf("d");

                else if(s[i]=='t')
                printf("m");

                else if(s[i]=='r')
                printf("k");

                else if(s[i]=='v')
                printf("o");

                else if(s[i]=='m')
                printf("f");

                else if(s[i]=='u')
                printf("n");

                else if(s[i]=='s')
                printf("l");

                else if(s[i]=='w')
                printf("p");

                else if(s[i]=='p')
                printf("i");

                else if(s[i]=='5')
                printf(".");

                else if(s[i]=='P')
                printf("I");

                else if(s[i]=='I')
                printf("B");

                else if(s[i]=='T')
                printf("M");

                else if(s[i]=='|')
                printf("u");

                else if(s[i]=='j')
                printf("c");

                else if(s[i]=='L')
                printf("E");

                else if(s[i]=='n')
                printf("g");

                else if(s[i]=='x')
                printf("q");

                else if(s[i]=='a')
                printf("Z");

                else if(s[i]=='b')
                printf("[");

                else if(s[i]=='[')
                printf("T");

                else if(s[i]=='i')
                printf("b");

              else if(s[i]=='M')
                printf("F");

                else if(s[i]=='`')
                printf("Y");

                else if(s[i]=='V')
                printf("O");

                else if(s[i]-0==ch1)
                printf("U");

                else if(s[i]=='H')
                printf("A");

                else if(s[i]=='Y')
                printf("R");

                else if(s[i]=='U')
                printf("N");

                else if(s[i]=='O')
                printf("H");

                else if(s[i]=='Z')
                printf("S");

                else if(s[i]=='3')
                printf(",");

                else if(s[i]=='I')
                printf("B");

                else if(s[i]==']')
                printf("V");

                else if(s[i]=='M')
                printf("F");

                else if(s[i]=='N')
                printf("G");

                else if(s[i]=='R')
                printf("k");

                else if(s[i]=='S')
                printf("L");

                else if(s[i]=='_')
                printf("X");

                else if(s[i]-0==ch2)
                printf("W");

        }

        printf("\n");
    }
    return 0;
}
