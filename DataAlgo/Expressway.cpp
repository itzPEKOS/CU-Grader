#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

vector<pii> adj[701];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, c;
    cin >> n >> c;
    adj[1].push_back({c,2});
    for(int i = 3; i <= n; i++) {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int v, w;
            cin >> v >> w;
            adj[i].push_back({w,v});
            adj[v].push_back({w,i});
        }
        vector<int> dis(n+1,INT_MAX);
        priority_queue<pii> pq;
        pq.push({0,1});

        while(!pq.empty()) {
            auto it = pq.top();
            int w = -it.f, u = it.s;
            pq.pop();

            for(auto v : adj[u]) {
                if(dis[v.s] > w + v.f) {
                    dis[v.s] = w + v.f;
                    pq.push({-dis[v.s],v.s});
                }
            }
        }
        cout << dis[2] << " ";
    }

    return 0;
}