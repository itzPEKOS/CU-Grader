#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int n, e, S;
int dis[101];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> e >> S;
    for(int i = 0; i < n; i++) dis[i] = INT_MAX;
    vector<pair<int,pii>> adj;
    for(int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj.push_back({w,{u,v}});
    }
    dis[S] = 0;
    for(int i = 1; i < n; i++) {
        for(auto it : adj) {
            int u = it.s.f, v = it.s.s, w = it.f;
            if(dis[v] > dis[u] + w && dis[u] != INT_MAX) {
                dis[v] = dis[u] + w;
            }
        }
    }
    bool neg = false;
    for(auto it : adj) {
        int u = it.s.f, v = it.s.s, w = it.f;
        if(dis[v] > dis[u] + w && dis[u] != INT_MAX) {
            neg = true;
            break;
        }
    }
    if(neg) {
        cout << -1;
    } else {
        for(int i = 0 ; i < n; i++) {
            cout << dis[i] << " ";
        }
    }

    return 0;
}