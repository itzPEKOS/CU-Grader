#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,pair<float,float>> goods;
vector<pair<float,string>> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    float price;
    
    while(cin >> str) {
        if(str == "END") break;
        cin >> price;
        goods[str].f = price;
    }

    bool chk = false;
    while(cin >> str) {
        if(goods.find(str) == goods.end()) continue;
        chk = true;
        goods[str].s += goods[str].f;
    }
    if(!chk) {
        cout << "No Sales";
        return 0;
    }
    for(auto it : goods) {
        if(it.s.s != 0) {
            v.push_back({-it.s.s,it.f});
        }
    }
    sort(v.begin(),v.end());
    int mn = 3;
    mn = min(mn,(int)v.size());
    for(int i = 0; i < mn; i++) {
        cout << v[i].s << " " << -v[i].f << '\n';
    }

    return 0;
}