#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int a[]={1,2,1},i,j;
    stack<int>mystack;
    for(i=0;a[i];i++)
    {
        j=a[i];
        if(mystack.empty() || j<mystack.top())
            mystack.push(j);

        else
        {
            while(j>mystack.top())
            {
                 mystack.pop();
                printf("%d ",a[i]);

            }
            mystack.push(j);
        }
    }

    return 0;
}
