#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    int a;
    vector<int> mp(n);
    int mx_deg = 0;
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            cin >> a;
            cnt += a;
        }
        if(mx_deg < cnt) mx_deg = cnt;
        mp[cnt]++;
    }
    for(int i = 0; i <= mx_deg; i++) {
        cout << mp[i] << ' ';
    }

    return 0;
}