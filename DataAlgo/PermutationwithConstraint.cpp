#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

unordered_map<int,int> con;

void permu(int n,vector<int> &sol,int len,vector<bool> &used) {
    if(len < n) {
        for(int i = 0; i < n; i++) {
            if(!used[i]) {
                used[i] = true;
                sol[len] = i;
                if(con.find(sol[len]) != con.end()) {
                    if(!used[con[sol[len]]]) {
                        used[i] = false;
                        continue;
                    }
                }
                permu(n,sol,len+1,used);
                used[i] = false;
            }
        }
    } else {
        for(auto it : sol) cout << it << " ";
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        con[b] = a;
    }

    vector<int> sol(n,0);
    vector<bool> used(n,false);
    permu(n,sol,0,used);

    return 0;
}