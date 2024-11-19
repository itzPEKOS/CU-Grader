#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, f0 = 0, f1 = 1, f;
    cin >> n;
    if(n == 0) {
        cout << 0;
        return 0;
    }
    if(n == 1) {
        cout << 1;
        return 0;
    }
    for(int i = 1; i < n; i++) {
        f = f1;
        f1 += f0;
        f0 = f;
    }
    cout << f1;

    return 0;
}