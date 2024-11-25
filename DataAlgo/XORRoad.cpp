#include <bits/stdc++.h>

#define f first
#define s second
#define ull unsigned long long
#define pii pair<int, int>

using namespace std;

int root[2001];

int f_root(int x) {
    if(root[x] == x) return x;
    return f_root(root[x]);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    ull beuty[n];
    vector<pair<ull,pii>> e;

    for(int i = 0; i < n; i++) {
        cin >> beuty[i];
        root[i] = i;
    }

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            e.push_back({beuty[i] ^ beuty[j],{i,j}});
        }
    }
    
    sort(e.begin(),e.end(),greater<>());

    ull ans = 0;

    for(auto it : e) {
        int r1 = f_root(it.s.f), r2 = f_root(it.s.s);
        if(r1 != r2) {
            ans += it.f;
            root[r2] = r1;
        }
    }
    cout << ans;

    return 0;
}