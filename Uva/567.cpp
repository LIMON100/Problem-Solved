#include<bits/stdc++.h>
using namespace std;

vector<int>graph[21];

void bfs(int s, int d)
{
    queue< int >q;
    int visited[50]={0}, level[50];
    visited[s]=1;
    level[s]=0;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        for(int l=0; l<graph[u].size(); l++)
        {
            int v = graph[u][l];
            if(!visited[v])
            {
                visited[v]=1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
   printf("%2d to %2d: %d\n", s, d, level[d]);
}

int main()
{
    int x, y, caseno=0;
    while(scanf("%d",&x)==1)
    {
        for(int j=0; j<x; j++)
        {
            scanf("%d",&y);
            graph[1].push_back(y);
            graph[y].push_back(1);
        }
        for(int i=2; i<=19; i++)
        {
            scanf("%d",&x);
            for(int j=0; j<x; j++)
            {
                scanf("%d",&y);
                graph[i].push_back(y);
                graph[y].push_back(i);
            }
        }
        int src, dest, n;
        scanf("%d",&n);
        printf("Test Set #%d\n",++caseno);
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&src, &dest);
            bfs(src,dest);
        }
       printf("\n");
       for(int i=0; i<21; i++)
       {
           graph[i].clear();
       }
    }
    return 0;
}




/*#include<bits/stdc++.h>
using namespace std;
vector<int>g[50];

void bfs(int s,int e)
{
    queue<int>q;
    int visited[50]={0},level[50];
    q.push(s);
    visited[s]=1;
    level[s]=0;

    while(!q.empty())
    {
        int i=q.front();
        for(int j=0; j<g[i].size(); j++)
        {
            int t=g[i][j];
            if(!visited[t])
            {
                visited[t]=1;
                level[t]=level[i]+1;
                q.push(t);
            }
        }
        q.pop();
    }
    printf("%d to %d: %d\n",s,e,level[e]);
}

int main()
{
    int x,y,x1,y1,i,j,cas=0;
    while(scanf("%d",&x)==1)
    {
        for(i=0; i<x; i++)
        {
         scanf("%d",&y);
         g[1].push_back(y);
         g[y].push_back(1);
        }

        for(i=2; i<=19; i++)
        {
            scanf("%d",&x1);
            for(j=0; j<x1; j++)
            {
                scanf("%d",&y1);
                g[i].push_back(y1);
                g[y1].push_back(i);
            }
        }
        int t,s,e;
        scanf("%d",&t);
        printf("Test Set #%d\n",++cas);
        for(i=0; i<t; i++)
        {
            scanf("%d %d",&s,&e);
            bfs(s,e);
        }
        printf("\n");
        for(i=0; i<21; i++)
        {
            g[i].clear();
        }

    }
    return 0;
}*/
