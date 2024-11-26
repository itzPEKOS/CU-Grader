#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int k, n;
    cin >> k >> n;
    vector<int> c(k+1,0), a(n+1,0);
    for(int i = 1; i <= k; i++) {
        cin >> c[i];
    }
    for(int i = 0; i < k; i++) {
        cin >> a[i];
    }
    for(int i = k; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            a[i] = (a[i] + (c[j]*a[i-j])%32717)%32717;
        }
    }
    cout << a[n];

    return 0;
}