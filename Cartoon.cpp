#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    unordered_map<string,vector<string>> toy;
    vector<string> toy_name;
    string name, type;

    while(cin >> name >> type) {
        toy[type].push_back(name);
        bool exit = false;
        for(auto it : toy_name) {
            if(it == type) {
                exit = true;
            }
        }
        if(!exit) toy_name.push_back(type);
    }

    for(string t : toy_name) {
        cout << t << ':';
        for(string n : toy[t]) {
            cout << ' ' << n;
        }
        cout << '\n';
    }

    return 0;
}