#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int p[1001];

int findp(int x) {
    if(p[x] == x) return p[x];
    return findp(p[x]);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pair<int,pii>> adj(n+1);

    for(int i = 0; i < m; i++) {
        int w, u, v;
        cin >> w >> u >> v;
        adj.push_back({w,{u,v}});
    }
    for(int i = 1; i <= n; i++) {
        p[i] = i;
    }

    sort(adj.begin(),adj.end());

    int ans = 0;
    for(auto it : adj) {
        int r1 = findp(it.s.f), r2 = findp(it.s.s);
        if(r1 != r2) {
            p[r2] = r1;
            ans += it.f;
        }
    }
    cout << ans;

    return 0;
}