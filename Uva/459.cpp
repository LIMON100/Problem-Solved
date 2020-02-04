#include<bits/stdc++.h>
using namespace std;
int r[26],parent[26],n;

class disjoinset
{
public:

    void makeset(int n)
    {
        for(int i=0; i<n; i++)
        {
            parent[i]=i;
            r[i]=0;
        }
    }

     int find(int x)
    {

        if (parent[x]==x)
        {

            return x;

        }
        else
        {
            parent[x]=find(parent[x]);
            return parent[x];
        }
    }

    void Union(int &a,int &b)
    {
        int xroot=find(a);
        int yroot=find(b);

        if(xroot==yroot)
        {
            return;
        }

        if(r[xroot] < r[yroot])
        {
            parent[xroot]=yroot;
        }

        else if(r[yroot] < r[xroot])
        {
            parent[yroot]=xroot;
        }

        else
        {
            parent[yroot]=xroot;
            r[xroot]=r[xroot]+1;

        }
    }
};

int main()
{
    string s1,s2;
    disjoinset ds;
    int x,y,n,t,ans;
    scanf("%d\n\n",&t);

    while(t--)
    {
        getline(cin,s1);
        n=s1[0]-'A'+1;
        ans=n;

        ds.makeset(ans);

        while(1)
        {
           getline(cin,s1);
            if(s1.empty())
            {
                break;
            }

             x=s1[0]-'A';
             y=s1[1]-'A';

            if(ds.find(x)!=ds.find(y))
            {
                ds.Union(x,y);
                ans--;
            }
        }

        if(t!=1)
        printf("\n");
        printf("%d\n",ans);
    }
    return 0;
}
