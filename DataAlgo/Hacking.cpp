#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> attacked(k), time(n), adj[n], dis(n,INT_MAX);
    for(int i = 0; i < k; i++) {
        cin >> attacked[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> time[i];
    }
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    priority_queue<pii> pq;
    for(auto it : attacked) {
        dis[it] = time[it];
        pq.push({0,it});
    }
    while(!pq.empty()) {
        auto it = pq.top();
        int u = it.s;
        pq.pop();
        for(auto v : adj[u]) {
            if(dis[v] > time[v] + dis[u]) {
                dis[v] = time[v] + dis[u];
                pq.push({-dis[v],v});
            }
        }
    }
    int mx = 0;
    for(int i = 0; i < n; i++) {
        mx = max(mx,dis[i]);
    }
    cout << mx;

    return 0;
}