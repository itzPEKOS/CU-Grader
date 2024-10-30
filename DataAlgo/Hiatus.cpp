#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    set<pii> out;
    int a, b;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        out.insert({a,b});
    }

    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        auto it = out.upper_bound({a,b});
        if(it == out.begin()) {
            cout << "-1 -1 ";
        } else if(out.count({a,b})) {
            cout << "0 0 ";
        } else {
            --it;
            if(it->f <= a) {
                cout << it->f << " " << it->s << " ";
            } else {
                cout << "-1 -1 ";
            }
        }
    }

    return 0;
}