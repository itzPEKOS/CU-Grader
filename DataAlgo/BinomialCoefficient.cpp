#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

ll table[40][40];

ll C(ll n,ll k) {
    for(int i = 0; i <= n; i++) {
        table[i][0] = 1;
        table[i][i] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            table[i][j] = table[i-1][j] + table[i-1][j-1];
        }
    }
    return table[n][k];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, k;
    cin >> n >> k;
    cout << C(n,k);

    return 0;
}