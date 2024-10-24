#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

unordered_map<string,vector<string>> ID, keyID;
map<string,int> order;
set<pair<int,string>> ans;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    string id, key;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> id;
        order[id] = i;
        while(cin >> key) {
            if(key == "*") break;
            ID[id].push_back(key);
            keyID[key].push_back(id);
        }
    }
    cin >> id;
    for(auto i : ID[id]) {
        for(auto j : keyID[i]) {
            if(j != id) {
                ans.insert({order[j],j});
            }
        }
    }

    if(ans.empty()) {
        cout << ">> Not Found";
    } else {
        for(auto it : ans) {
            cout << ">> " << it.s << '\n';
        }
    }

    return 0;
}