#include <bits/stdc++.h>
#define MEM(a,b) memset((a),(b),sizeof(a))
#define sz 100
using namespace std;

vector<int> nodes[sz];
bool color[sz];
int f=0;
int bfs(int source)
{
    queue<int>q;
    q.push(source);
    color[source]=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<nodes[u].size(); i++)
        {
            int element=nodes[u][i];
            if(color[element]==-1)
            {
                if(color[u]==0)
                    color[element]=1;
                else
                    color[element]=0;
                q.push(element);
            }
            if(color[u]==color[element])
            {
                return f=1;
            }
        }
    }
}

int main()
{
    int n,a,b,e;
   while(cin>>n)
    {
       if(n==0)
       {
           break;
       }
        cin>>e;
        MEM(color,-1);
        for(int i=1;i<=e;i++)
        {
            cin>>a>>b;
            nodes[a].push_back(b);
            nodes[b].push_back(a);
        }

        int ok=bfs(f);
        if(ok==0)
        {
            printf("BICOLORABLE.\n");
        }
        else
        {
            printf("NOT BICOLORABLE.\n");
        }
    }

    return 0;
}
