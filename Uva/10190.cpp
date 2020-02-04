#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num,m,arr[100000],c;
    while(cin>>num>>m )
    {
        if(m>num || m<=1)
        {
            printf("Boring!\n");
            continue;
        }
        int j=0;
        c=0;
        while(num>1)
        {
            if(num%m==0)
            {
               arr[j++]=num;
            }
            else{
                c++;
            }
            num/=m;
            if(num==1)
                arr[j++]=1;
        }

        if(c==0)
            {
                for(int i=0;i<j;i++)
                {
                    cout<<arr[i]<<" ";
                }
              cout<<endl;
            }

        else
            {
            cout<<"Boring!"<<endl;
           }
    }
    return 0;
}
