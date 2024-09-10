#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

vector<int> adj[10001];
stack<int> s;
bool chk = false;
int st, ed;

void print_stack(vector<int> stack) {
    int i = 1;
    for(auto it : stack) {
        if(i) {
            cout << it;
            i = 0;
        } else {
            cout << " -> " << it;
        }
    }
    cout << '\n';
}

void dfs(int n,vector<int> stack) {
    stack.push_back(n);
    if(n == ed) {
        print_stack(stack);
        chk = true;
        return;
    }

    sort(adj[n].begin(), adj[n].end());

    for(auto it : adj[n]) {
        dfs(it,stack);
    }
    stack.pop_back();
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
    vector<int> stack;
    dfs(st,stack);
    if(!chk) cout << "no";

    return 0;
}