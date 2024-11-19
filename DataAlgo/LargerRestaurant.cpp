#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, a;
    cin >> n >> a;
    ll t[n];
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }
    ll q;
    for(int i = 0; i < a; i++) {
        cin >> q;
        if(q <= n) {
            cout << 0 << '\n';
            continue;
        }
        ll l = 0, r = 1e12, mid, sum;
        while(l < r) {
            sum = n;
            mid = (l+r)/2;
            for(int j = 0; j < n; j++) {
                if(sum >= q) break;
                sum += mid/t[j];
            }
            if(sum < q) {
                l = mid+1;
            } else {
                r = mid;
            }
        }
        cout << l << '\n';
    }

    return 0;
}