#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, tmp;
    cin >> n;
    tmp = n;
    vector<ll> ans;
    for(ll i = 2; i <= n; i++) {
        while(tmp%i == 0) {
            tmp /= i;
            ans.push_back(i);
        }
        if(tmp <= 1) break;
    }
    for(auto it = ans.begin(); it != ans.end(); ++it) {
        if(it == ans.begin()) cout << *it;
        else cout << '*' << *it;
    }

    return 0;
}