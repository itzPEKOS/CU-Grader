#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int n, m, ans;
int board[2001][2001];
bool vis[2001][2001];
map<pii,int> t;
int dx[] = {1,0,-1,0}, dy[] = {0,-1,0,1};

void bfs(int i, int j, int w) {
    if(vis[i][j] || i < 0 || i >= n || j < 0 || j >= m || board[i][j] == 0) return;
    vis[i][j] = true;

    // cout << i << " " << j;
    if(board[i][j] == 2) {
        // cout << i << " " << j;
        t[{i,j}] = min(t[{i,j}],w);
    }

    for(int k = 0; k < 4; k++) {
        int di = i + dx[k], dj = j + dy[k];
        // cout << di << " " << dj << '\n';
        if(!(vis[di][dj] || di < 0 || di >= n || dj < 0 || dj >= m || board[di][dj] == 0)) {
            bfs(di,dj,w+1);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];
            vis[i][j] = false;
            if(board[i][j] == 2) {
                t[{i,j}] = INT_MAX;
            }
        }
    }

    bfs(0,0,0);

    for(auto it : t) {
        ans += it.s*2;
    }
    cout << ans;

    return 0;
}