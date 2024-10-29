#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, m, k, p;
    cin >> n >> m >> k;
    set<ll> s;
    for(int i = 0; i < n; i++) {
        cin >> p;
        s.insert(p);
    }
    for(int i = 0; i < m; i++) {
        int cnt = 0;
        cin >> p;
        auto upper = distance(s.begin(), s.upper_bound(p+k));
        auto lower = distance(s.begin(), s.lower_bound(p-k));
        cout << upper - lower << " ";
    }

    return 0;
}