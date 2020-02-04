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


void Union(int a,int b)
{
    int x=find(a);
    int y=find(b);

    if(x!=y)
    {
        parent[x]=y;
        r[y]+=r[x];
    }
}

int main()
{
    map<string,int>m;
    char s1[30],s2[30];
    int c,r1,i;
    while(scanf("%d%d",&c,&r1)!=1)
    {
        if(c==0 && r1==0)
        {
            break;
        }

        for(i=0; i<c; i++)
        {
            scanf("%s",s1);
            m[s1]=i;
            parent[i]=i;
            r[i]=1;
        }

        for(i=0; i<r1; i++)
        {
            scanf("%s %s",s1,s2);
            int x=m[s1];
            int y=m[s2];

            Union(x,y);
        }

        int maximum=0;
        for(i=0; i<c; i++)
        {
            if(r[i]>maximum)
                maximum=r[i];
        }

        printf("%d\n",maximum);
        printf("\n");
    }
    return 0;
}
