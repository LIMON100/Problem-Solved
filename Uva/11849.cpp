#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    while(scanf("%d%d", &n, &m))
    {
        if(n==0 && m==0) break;
        int cnt=0;
        map<int, int> mp;

        for(int i=0; i<n; i++) {
            scanf("%d", &a);
            mp[a]=1;
        }

        for(int i=0; i<m; i++) {
            scanf("%d", &a);
            if(mp[a]==1) cnt++;
        }
        printf("%d\n", cnt);
        mp.clear();
    }
    return 0;
}
