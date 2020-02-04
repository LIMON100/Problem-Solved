#include<bits/stdc++.h>
using namespace std;
map<string,string>route;
map<string,int>visited;

int bfs(string s,string e,map<string,vector<string> > m)
{
    queue<string>q;
    q.push(s);
    visited[s]=1;

    while(!q.empty())
    {
        string current=q.front();
        q.pop();

        if(current==e)
        {
            return visited[current];
        }

        for(int i=0; i<m[current].size(); i++)
        {
            string next=m[current][i];
            if(visited[next]==-1)
            {
                visited[next]=visited[current]+1;
                route[next]=current;
                q.push(next);
            }
        }
    }
    return -1;
}

void find_path(string a,string b)
{
    if(a==b)
    {
        return;
    }
    else
    {
        find_path(route[a],b);
        cout<<route[a]<<" "<<a<<endl;
    }
}

int main()
{
    int nodes;
    while(scanf("%d",&nodes)!=EOF)
    {
        string s1,s2;
        map<string,vector<string> > m;
        for(int i=0; i<nodes; i++)
        {
            cin>>s1>>s2;
            m[s1].push_back(s2);
            m[s2].push_back(s1);
            visited[s1]=-1;
            visited[s2]=-1;
        }
        string s,e;
        cin>>s>>e;
        if(bfs(s,e,m)!=-1)
        {
            find_path(e,s);
        }
        else
        {
            printf("No route\n");
        }
        printf("\n");
    }
    return 0;
}
