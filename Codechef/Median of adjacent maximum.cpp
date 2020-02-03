#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i,n,j,a[20];
    cin>>n;
    for(i=0;i<(2*n)-1;i++)
      cin>>a[i];

    for(i=1;i<(2*n)-1;i++)
    {
        for(j=i+1;j<(2*n);j++){
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
        }
        }
    }

    for(i=0;i<(2*n);i++)
        cout<<a[i]<<" ";
    return 0;
}
