#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,set<string>> st;
set<string> ans;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string line;
    string u, v;
    while(getline(cin,line)) {
        if(line.find(' ') < line.length()) {
            u = line.substr(0,line.find(' '));
            v = line.substr(line.find(' ') + 1);
        } else {
            break;
        }
        st[u].insert(v);
        st[v].insert(u);
    }
    ans.insert(line);
    for(string i : st[line]) {
        ans.insert(i);
        for(string j : st[i]) {
            ans.insert(j);
        }
    }
    for(string it : ans) {
        cout << it << '\n';
    }

    return 0;
}