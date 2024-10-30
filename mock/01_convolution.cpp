#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int m, k, a, b;
    cin >> m >> k >> a >> b;
    vector<ll> x(100001,0), h(100001,0);
    int u, v;
    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        x[u] = v;
    }
    for(int i = 0; i < k; i++) {
        cin >> u >> v;
        h[u] = v;
    }

    for(int i = a; i <= b; i++) {
        ll sum = 0;
        for(int j = 0; j <= i; j++) {
            sum += x[j] * h[i-j];
        }
        cout << sum << " ";
    }

    return 0;
}