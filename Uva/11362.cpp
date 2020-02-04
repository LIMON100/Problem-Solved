#include<bits/stdc++.h>
using namespace std;

bool check(string a,string b)
{
    if(a.size()>b.size())
    {
        return false;
    }
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!=b[i])
                return false;
        }
    }
    return true;
}

int main()
{
    int t,i,n;
    string str[100001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>str[i];
        }
        sort(str,str+n);

        bool c=true;

        for(i=0; i<n-1; i++)
        {
            if(check(str[i],str[i+1]))
            {
                c=false;
                break;
            }
        }

        if(c)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
