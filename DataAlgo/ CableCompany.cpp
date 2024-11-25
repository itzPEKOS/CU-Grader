#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int root[1001];

int find_root(int x) {
    if(root[x] == x) return x;
    return find_root(root[x]);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,pii>> e;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int w;
            cin >> w;
            e.push_back({w,{i,j}});
        }
    }
    sort(e.begin(),e.end());

    for(int i = 0; i < n; i++) root[i] = i;

    int ans = 0;
    for(auto it : e) {
        int r1 = find_root(it.s.f), r2 = find_root(it.s.s);
        if(r1 != r2) {
            ans += it.f;
            root[r2] = r1;
        }
    }
    cout << ans;

    return 0;
}