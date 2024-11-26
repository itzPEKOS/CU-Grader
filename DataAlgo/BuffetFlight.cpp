#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> ci(n,0), co(n,0), adj[n], dis(n,INT_MAX);

    for(int i = 0; i < n; i++) cin >> ci[i];
    for(int i = 0; i < n; i++) cin >> co[i];

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    dis[0] = 0;
    priority_queue<pii> pq;
    pq.push({0,0});

    while(!pq.empty()) {
        auto it = pq.top();
        int w = -it.f, u = it.s;
        pq.pop();

        for(auto v : adj[u]) {
            if(dis[v] > co[u] + ci[v] + w) {
                dis[v] = co[u] + ci[v] + w;
                pq.push({-dis[v],v});
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << (dis[i] == INT_MAX ? -1 : dis[i]) << " ";
    }

    return 0;
}