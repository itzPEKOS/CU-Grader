#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, i = 0, j = 0, last, mx = -9999, cnt = 1;
    vector<pair<int,pair<pii,int>>> v;
    while(cin >> n) {
        if(j == 0) {
            last = n;
        } else if(n != last) {
            v.push_back({last,{{i,j},cnt}});
            mx = max(mx,cnt);
            cnt = 1;
            i = j;
            last = n;
        } else {
            cnt++;
        }
        j++;
    }
    mx = max(mx,cnt);
    v.push_back({last,{{i,j},cnt}});
    sort(v.begin(),v.end());
    for(auto it : v) {
        if(it.s.s == mx) {
            cout << it.f << " --> x[ " << it.s.f.f << " : " << it.s.f.s << " ]\n";
        }
    }

    return 0;
}