#include<bits/stdc++.h>
using namespace std;
int matrix[1001][1001];
int m,n;
int visit[1001][1001],cost[1001][1001];
int X[4] = {-1,0,0,1};
int Y[4] = {0,-1,1,0};

void bfs(int x,int y)
{
    int ux,uy,vx,vy,k;
    queue<int>Q;
    Q.push(x);
    Q.push(y);
    visit[x][y] = 1;
    cost[x][y]=0;

    while(!Q.empty())
    {
        ux = Q.front();
        Q.pop();
        uy = Q.front();

        Q.pop();

        for(k=0; k<4; k++)
        {
            vx = ux+X[k];
            vy = uy+Y[k];

            if((vx>=0&&vx<=m) && (vy>=0&&vy<=n)&& matrix[vx][vy]==0)
            {
                if(!visit[vx][vy] && !cost[vx][vy])
                {
                    visit[vx][vy]=1;

                    Q.push(vx);
                     Q.push(vy);

                    cost[vx][vy]=cost[ux][uy]+1;

                }
            }
         }
    }

}
int main()
{
    int i,j,k,row,r,data,b,s,s1,e,e1;
    while(scanf("%d %d",&m,&n))
    {
        if(m==0 && n==0)
        break;
        memset(visit,0,sizeof(visit));
        memset(cost,0,sizeof(cost));
        memset(matrix,0,sizeof(matrix));

        scanf("%d",&row);
        for(i=0;i<row;i++)
        {
          scanf("%d %d",&r,&data);
          for(j=1;j<=data;j++)
          {
              scanf("%d",&b);
              matrix[r][b]=1;
          }
        }
        scanf("%d %d",&s,&s1);
        bfs(s,s1);
        scanf("%d %d",&e,&e1);
        printf("%d\n",cost[e][e1]);

    }
    return 0;
}
