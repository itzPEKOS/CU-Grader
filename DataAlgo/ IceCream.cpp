#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<int> v(100001,0);
    unordered_map<int,int> mp;
    int n, m, start, a, b;
    cin >> n >> m >> start;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        mp[a] = b;
    }
    v[0] = start;
    int plus = start;
    for(int i = 1; i < 100001; i++) {
        if(mp[i] != 0) {
            plus = mp[i];
        }
        v[i] = v[i-1] + plus;
    }
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        int ans = a + v[b];
        if(a <= v[b]) {
            ans = a;
        }
        cout << lower_bound(v.begin(),v.end(),ans) - v.begin() << " ";
    }

    return 0;
}