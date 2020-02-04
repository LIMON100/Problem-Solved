#include<bits/stdc++.h>
using namespace std;
int parent[100];
int r[100];

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


int Union(int a,int b)
{
    int x = find(a);
    int y = find(b);

    if(x != y)
    {
        parent[x] = y;
        r[y] += r[x];
    }
    cout<<r[y]<<endl;
}

int main()
{
    map<string,int>m;
    string s1,s2;
    int f,i,x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>f;
        int a=0;

        for(i=0; i<f; i++)
        {
            cin>>s1>>s2;
            if(m.find(s1)== m.end())
            {
                parent[a]=a;
                r[a]=1;
                m[s1]=a++;
                cout<<m[s1]<<" ";
            }
            if(m.find(s2)== m.end())
            {
                parent[a]=a;
                r[a]=1;
                m[s2]=a++;
                cout<<m[s2]<<endl;
            }

            x=m[s1];
            y=m[s2];
            Union(x,y);
        }
    }
    return 0;
}

