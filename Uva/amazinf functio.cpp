#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    double j=0,i,f;
    cin>>n;

    if(n==0)
    {
        i=pow(2,0.5)+pow(3,0.5)+pow(6,0.5);
        printf("%.10lf\n",i);
    }

    i=pow(2,0.5)+pow(3,0.5)+pow(6,0.5);

    if(n!=0)
    {
            j=(pow(i,2)-5)/((2*i)+4);
                printf("%.10lf\n",j);
    }

    return 0;
}
