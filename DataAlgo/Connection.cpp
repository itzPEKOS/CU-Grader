#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int n, e, k;
vector<int> adj[1001];

int bfs(int now,vector<bool> & visited) {
    queue<int> q;
    int dis[n] = {n};
    q.push(now);
    dis[now] = 0;
    visited[now] = true;
    int cnt = 1;
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        if(dis[f] == k) continue;
        for(auto it : adj[f]) {
            if(!visited[it]) {
                cnt++;
                visited[it] = true;
                dis[it] = dis[f] + 1;
                q.push(it);
            }
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> e >> k;
    int u, v;
    for(int i = 0; i < e; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int mx = 0;
    for(int i = 0; i < n; i++) {
        vector<bool> visited(n,false);
        mx = max(mx,bfs(i,visited));
    }
    cout << mx;

    return 0;
}