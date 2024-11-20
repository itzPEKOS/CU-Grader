#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int visited[10001];
int ans = 0;

void dfs(int a,vector<vector<int>> & adj) {
    visited[a] = ans;
    for(auto it : adj[a]) {
        if(visited[it] == 0) {
            dfs(it,adj);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, e, u, v;
    cin >> n >> e;
    vector<vector<int>> adj(n+1);;
    for(int i = 0; i < e; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i = 1; i <= n; i++) {
        if(visited[i] == 0) {
            ans += 1;
            dfs(i,adj);
        }
    }
    cout << ans;

    return 0;
}