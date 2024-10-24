#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    set<string> win, lose;
    string w, l;
    while(cin >> w >> l) {
        win.insert(w);
        lose.insert(l);
    }
    set<string> ans;
    for(string it : win) {
        if(lose.find(it) == lose.end()) {
            ans.insert(it);
        }
    }
    if(ans.size() == 0) {
        cout << "None";
    } else {
        for(string it : ans) {
            if(it == *ans.begin()) {
                cout << it;
            }
            else {
                cout << " " << it;
            }
        }
    }

    return 0;
}