#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int n, m, ans = INT_MAX;
int dx[] = {1,0,-1,0}, dy[] = {0,-1,0,1};
int mp[5001][5001];
queue<pair<int,pii>> land;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mp[i][j];
            if(mp[i][j] == 1) {
                land.push({1,{i,j}});
            }
        }
    }

    while(!land.empty()) {
        auto it = land.front();
        int w = it.f, r = it.s.f, c = it.s.s;
        land.pop();
        for(int i = 0; i < 4; i++) {
            int ni = r+dx[i], nj = c+dy[i];
            if(ni < 0 || ni >=n || nj < 0 || nj >= m) continue;
            if(mp[ni][nj] == 2) ans = min(ans,w+1);
            if(!mp[ni][nj]) {
                mp[ni][nj] = 1;
                land.push({w+1,{ni,nj}});
            }
        }
    }
    cout << ans;

    return 0;
}