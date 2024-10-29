#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<ll,ll> adj;

ll gf(ll n) {
    ll tmp;
    if(adj.find(n) == adj.end()) return 0;
    tmp = adj[n];
    if(adj.find(tmp) == adj.end()) return 0;
    tmp = adj[tmp];
    return tmp;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    ll u, v;
    for(int i = 0; i < n; i++) {
        cin >> u >> v;
        adj[v] = u;
    }
    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        if(adj.find(u) == adj.end() || adj.find(v) == adj.end()) {
            cout << "NO\n";
            continue;
        }
        if(gf(u) == gf(v) && u != v && gf(u) && gf(v)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}