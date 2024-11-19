#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

vector<ll> arr = {0}, glass = {0}; 

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, m, k, a;
    cin >> n >> m >> k;

    for(int i = 0; i < n; i++) {
        cin >> a;
        arr.push_back(arr[i]+a+k);
        glass.push_back(glass[i]+a);
    }
    ll st, mon;
    for(int i = 0; i < m; i++) {
        cin >> st >> mon;
        auto it = upper_bound(arr.begin(),arr.end(),mon+arr[st]) - arr.begin();
        it--;
        cout << glass[it] - glass[st] << '\n';
    }

    return 0;
}