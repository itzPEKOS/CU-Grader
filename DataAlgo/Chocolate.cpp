#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k;
    cin >> n >> k;
    set<int> s;
    ll arr[n+1];
    arr[0] = 1;
    for(int i = 0; i < k; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int i = 1; i <= n; i++) {
        ll md = 0;
        for(auto it : s) {
            if(i < it) break;
            md = (md + arr[i-it]) % 1000003;
        }
        arr[i] = md;
    }
    cout << arr[n];

    return 0;
}