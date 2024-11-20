#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

vector<vector<int>> adj(501,(vector<int>(501,0)));
bool vis[501][501] = {false};
queue<pii> q;

int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};
int r, c, t, cnt = 0;

bool isValid(int x,int y) {
    return x >= 0 && y >= 0 && x < r && y < c && adj[x][y] == 0;
}

void pan() {
    queue<pii> tmp;
    while(!q.empty()) {
        auto& [f, s] = q.front();
        q.pop();

        if(vis[f][s]) continue;
        vis[f][s] = true;

        cnt++;

        tmp.push({f,s});
        for(int i = 0; i < 4; i++) {
            int df = f + dx[i];
            int ds = s + dy[i];
            if(isValid(df,ds)) {
                adj[df][ds] = 1;
                tmp.push({df,ds});
            }
        }
    }
    q = tmp;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> r >> c >> t;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> adj[i][j];
            if(adj[i][j] == 1) {
                q.push({i,j});
            }
        }
    }
    for(int i = 0; i < t+1; i++) {
        pan();
    }
    cout << cnt;

    return 0;
}