#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

vector<int> adj[10001];
bool visited[10001] = {false};
int st, ed;

bool dfs(int n) {
    if(n == ed) {
        return true;
    }
    visited[n] = true;

    for(auto it : adj[n]) {
        if(!visited[it]) {
            if(dfs(it)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n >> st >> ed;
    int u, v;
    for(int i = 0; i < n; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    bool ans = dfs(st);
    if(ans) cout << "yes";
    else cout << "no";

    return 0;
}