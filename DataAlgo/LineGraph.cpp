#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

vector<int> adj[200001];
bool vis[200001] = {false};
int c1, c2, node;

void dfs(int now) {
    node++;
    if(adj[now].size() == 1) c1++;
    if(adj[now].size() == 2) c2++;
    for(auto &it : adj[now]) {
        if(!vis[it]) {
            vis[it] = true;
            dfs(it);
        }
    }
}

bool check(int v) {
    c1 = 0, c2 = 0, node = 0;
    vis[v] = true;
    dfs(v);

    return node == 1 || (c1 = 2 && c2 == node-2);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            if(check(i)) {
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}