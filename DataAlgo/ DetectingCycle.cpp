#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

bool dfs(vector<vector<int>>& adj, vector<bool>& vis, int curr, int parent) {
    vis[curr] = true;

    for(auto it : adj[curr]) {
        if(!vis[it]) {
            if(dfs(adj, vis, it, curr)) {
                return true;
            }
        } else if(it != parent) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t, n, e;
    cin >> t;
    while(t--) {
        cin >> n >> e;
        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);
        int u, v;
        
        for(int i = 0; i < e; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        bool cycle = false;
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                if(dfs(adj, vis, i, -1)) {
                    cycle = true;
                    break;
                }
            }
        }
        
        cout << (cycle ? "YES" : "NO") << '\n';
    }

    return 0;
}