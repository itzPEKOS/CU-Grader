#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

vector<int> adj[100001];
int dis[100001], ans;

void dfs(int now,int parent,int d) {
    dis[now] = d;
    for(auto &it : adj[now]) {
        if(dis[it] == 0) {
            dfs(it,now,d+1);
        } else if(dis[it] != 0 && it != parent && ans == 0) {
            ans = d - dis[it] + 1;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,-1,1);
    cout << ans;

    return 0;
}