#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int n, m, ans;
int board[2001][2001];
int dis[2001][2001];
bool vis[2001][2001];
vector<pii> t;
int dx[] = {1,-1,0,0}, dy[] = {0,0,-1,1};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];
            dis[i][j] = INT_MAX;
            vis[i][j] = false;
            if(board[i][j] == 2) {
                t.push_back({i,j});
            }
        }
    }
    queue<pii> q;
    q.push({0,0});
    dis[0][0] = 0;
    while(!q.empty()) {
        auto tmp = q.front();
        int ni = tmp.f, nj = tmp.s;
        q.pop();
        if(vis[ni][nj]) continue;
        vis[ni][nj] = true;
        for(int i = 0; i < 4; i++) {
            int ii = ni + dx[i], jj = nj + dy[i];
            if(ii < 0 || ii >= n || jj < 0 || jj >= m) continue;
            if(board[ii][jj] == 0 || vis[ii][jj]) continue;
            dis[ii][jj] = dis[ni][nj] + 1;
            q.push({ii,jj});
        }
    }

    ll ans = 0;
    for(auto it : t) {
        ans += dis[it.f][it.s] * 2;
    }
    cout << ans;

    return 0;
}