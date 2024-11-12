#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, q;
    cin >> n >> q;
    vector<pii> v;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    int p[n] = {0};
    p[0] = v[0].s;
    for(int i = 1; i < n; i++) {
        p[i] = p[i-1] + v[i].s;
    }
    int a;
    for(int i = 0 ; i < q; i++) {
        cin >> a;
        auto it = lower_bound(p,p+n,a) - p;
        cout << v[it].f << '\n';
    }

    return 0;
}