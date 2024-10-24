#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    map<string,int> pt;
    vector<pair<int,string>> v;
    string song, singer, type, time;
    while(cin >> song) {
        cin >> singer >> type >> time;
        int mn, sc;
        mn = stoi(time.substr(0,time.find(':')));
        sc = stoi(time.substr(time.find(':')+1));
        sc += mn*60;
        pt[type] += sc;
    }
    for(auto it : pt) {
        v.push_back({-it.s,it.f});
    }
    sort(v.begin(),v.end());
    int m = 3;
    m = min(m,(int)v.size());
    for(int i = 0; i < m; i++) {
        cout << v[i].s << " --> " << (-v[i].f)/60 << ':' << (-v[i].f)%60 << '\n';
    }

    return 0;
}