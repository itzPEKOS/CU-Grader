#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int dis[1001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<pii> adj[1001];
    for(int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
        for(int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if(a != -1 && a != 0) {
                adj[i].push_back({a,j});
            }
        }
    }
    priority_queue<pii> pq;
    dis[0] = 0;
    pq.push({0,0});
    while(!pq.empty()) {
        auto it = pq.top();
        int u = it.s;
        pq.pop();
        for(auto [w, v] : adj[u]) {
            if(dis[v] > w + dis[u]) {
                dis[v] = w + dis[u];
                pq.push({-dis[v],v});
            }
        }
    }
    int mx = -1;
    for(int i = 1; i < n; i++) {
        mx = max(mx,dis[i]);
    }
    if(mx == INT_MAX) {
        cout << -1;
    } else {
        cout << mx;
    }

    return 0;
}