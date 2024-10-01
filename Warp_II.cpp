#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

vector<int> adj[10001];
vector<vector<int>> e;
stack<int> s;
bool chk = false, visited[10001] = {false};
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

bool is_exit(vector<int> v) {
    for(auto it : e) {
        if(v == it) {
            return true;
        }
    }
    return false;
}

void dfs(int n,vector<int> stack) {
    stack.push_back(n);
    visited[n] = true;
    
    if(n == ed) {
        if(!is_exit(stack)) {
            e.push_back(stack);
            print_stack(stack);
            chk = true;
        }
    } else {
        sort(adj[n].begin(), adj[n].end());

        for(auto it : adj[n]) {
            if(!visited[it])
                dfs(it,stack);
        }
    }

    visited[n] = false;
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