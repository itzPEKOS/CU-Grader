#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    set<int> s;
    int n;
    bool chk = false;
    while(cin >> n) {
        if(s.find(n) != s.end() && !chk) {
            chk = !chk;
        }
        if(!chk){
            s.insert(n);
        }
    }
    if(!chk) {
        cout << -1;
    } else {
        cout << (int)s.size() + 1;
    }

    return 0;
}