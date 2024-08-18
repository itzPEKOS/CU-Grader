#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,int> mp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, ans = 0, i, f = 1;
    cin >> n;
    string country, last;
    for(i = 0; i < n; i++) {
        int fee;
        cin >> country >> fee;
        mp[country] = fee;
    }
    while(cin >> country) {
        string tmp = "";
        tmp += country[4];
        tmp += country[5];
        if(f == 1) {
            f = 0;
        } else if(tmp != last) {
            ans += mp[tmp];
        }
        last = tmp;
    }
    cout << ans;

    return 0;
}