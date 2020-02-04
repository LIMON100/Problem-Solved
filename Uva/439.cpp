#include <bits/stdc++.h>
using namespace std;
int N=8;
struct cell
{
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};

bool isInside(int x, int y, int N)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}

int minimummoves(int e1,int r1,int e2,int r2,int n)
{

    int fx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int fy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    queue<cell> q;

    q.push(cell(e1,r1,0));

    cell t;
    int x, y;
    bool visit[N + 1][N + 1];

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;

    visit[e1][r1] = true;

    while (!q.empty())
    {
        t = q.front();
        q.pop();
        visit[t.x][t.y] = true;

        if (t.x == e2 && t.y == r2)
            return t.dis;

        for (int i = 0; i < 8; i++)
        {
            x = t.x + fx[i];
            y = t.y + fy[i];

            if (isInside(x, y, N) && !visit[x][y])
                q.push(cell(x, y, t.dis + 1));

        }
    }
}

int main()
{
   string s1,s2;
   int e1,e2,r1,r2;
   while(cin>>s1>>s2)
   {
      e1=s1[0]-96;
      r1=s1[1]-'0';
      e2=s2[0]-96;
      r2=s2[1]-'0';

    cout <<"To get from "<<s1<<" to "<<s2<<" takes "<<minimummoves(e1,r1,e2,r2,N)<<" knight moves."<<endl;

  }
  return 0;
}

