#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

set<int> s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, N;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> N;
        s.insert(N);
    }
    for(int i = 0; i < m; i++) {
        cin >> N;
        bool c = 0;
        for(auto it : s) {
            if(s.find(N-it) != s.end() && N-it != it) {
                cout << "YES\n";
                c = 1;
                break;
            }
        }
        if(!c) cout << "NO\n";
    }

    return 0;
}