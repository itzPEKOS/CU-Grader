#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    map<string,set<int>> usm;
    int n, k;
    cin >> n >> k;
    string id;
    int m;
    for(int i = 0; i < n; i++) {
        cin >> id >> m;
        usm[id].insert(m);
    }

    int ans = 0;
    for(auto it : usm) {
        if(it.s.size() == k) {
            ans++;
        }
    }
    cout << ans;

    return 0;
}