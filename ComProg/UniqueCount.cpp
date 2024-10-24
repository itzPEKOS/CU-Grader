#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<int> v, diff;
    int n;
    while(cin >> n) {
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    diff.push_back(v[0]);
    for(int i = 1; i < (int)v.size(); i++) {
        if(v[i] != v[i-1]) {
            diff.push_back(v[i]);
        }
    }
    cout << (int)diff.size() << '\n';
    int mx = min(10,(int)diff.size());
    for(int i = 0; i < mx; i++) {
        if(i == 0) cout << diff[i];
        else cout << " " << diff[i];
    }

    return 0;
}