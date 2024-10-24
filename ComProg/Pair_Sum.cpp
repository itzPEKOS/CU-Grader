#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    set<int> s;
    int in, cnt = 0;
    while(cin >> in) {
        s.insert(in);
    }

    for(auto it : s) {
        if(it > n/2) break;
        if(s.find(n-it) != s.end() && n-it != it) cnt++;
    }
    cout << cnt;

    return 0;
}