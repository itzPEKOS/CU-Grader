#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    int p[m];
    for(int i = 0; i < m; i++) {
        cin >> p[i];
    }
    ll l = 0, r = 1e8, mid, sum;
    while(l < r) {
        sum = m;
        mid = (l+r)/2;
        for(int i = 0; i < m; i++) {
            if(sum >= n) break;
            sum += mid/p[i];
        }
        if(sum < n) {
            l = mid+1;
        } else {
            r = mid;
        }
    }
    cout << l;

    return 0;
}