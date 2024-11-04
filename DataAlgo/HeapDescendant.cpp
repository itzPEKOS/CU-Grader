#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, a;
    cin >> n >> a;
    vector<ll> v;
    v.push_back(a);
    for(int i = 1; a < n; i++) {
        a = a*2 + 1;
        if(a >= n) break;
        v.push_back(a);
        for(int j = 1; j < pow(2,i); j++) {
            if(a+j >= n) break;
            v.push_back(a+j);
        }
    }
    cout << v.size() << '\n';
    for(auto it : v) {
        cout << it << " ";
    }

    return 0;
}