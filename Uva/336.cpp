#include<bits/stdc++.h>
using namespace std;
map<int,int>visited;

void bfs(int s,map<int,vector<int> >m)
{
    queue<int>q;
    q.push(s);
    visited[s]=0;

    while(!q.empty())
    {
        int t=q.front();
        for(int i=0; i<m[t].size(); i++)
        {
            int u=m[t][i];
            if(!visited[u])
            {
                visited[u]=visited[t]+1;
                q.push(u);
            }
        }
        q.pop();
    }
}

int main()
{
    int nodes,ttl,s,i,cnt,ca=0,x,y;
    while(scanf("%d",&nodes)==1 & nodes!=0)
    {
        map<int,vector<int> >m;
        for(i=0; i<nodes; i++)
        {
            scanf("%d %d",&x,&y);
            m[x].push_back(y);
            m[y].push_back(x);
        }

        while(scanf("%d %d",&s,&ttl)==2)
        {
            if(s==0 && ttl==0)
            {
                break;
            }

            visited.clear();
            bfs(s,m);
            map<int,int>::iterator it;
            cnt=0;

            for(it=visited.begin(); it!=visited.end(); it++)
            {
                if((*it).second > ttl)
                {
                    cnt++;
                }
            }

            cnt=cnt+m.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++ca,cnt,s,ttl);
        }

    }
    return 0;
}
