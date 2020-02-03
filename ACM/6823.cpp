#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j,flag1=0,flag2=0,s2,l,n=0,k;
    char s[100];
    cin>>s;
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            if(s[i]%3==0)
            {
                flag1++;
            }
        }
    }


        for(i=0, k=0,j=i+1; j<l; j++)
        {
            if(s[i]>='0' && s[i]<='9' && s[j]>='0' && s[j]<='9')
            {
                s2=(s[i]+s[j]);
                if(s2%3==0)
                {
                    flag2++;
                }

            }
            else if(s[j]>'a' && s[j]<='z')
                {
                   i=j+1;
                }
                i++;
        }

    cout<<flag2+flag1<<endl;
    return 0;
}
