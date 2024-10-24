#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,int> party;
vector<pair<float,string>> frac;
vector<pair<int,pair<int,string>>> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string p;
    int n, all = 0;
    while(cin >> p) {
        if(p == "END") break;
        cin >> n;
        all += n;
        party[p] = n;
    }

    float avg = all/100.0;
    int hund = 100;

    for(auto it : party) {
        float a = it.s/avg*1.0;
        int b = a;
        frac.push_back({a-b,it.f});
        v.push_back({b,{it.s,it.f}});
        hund -= b;
    }

    if(hund > 0) {
        sort(frac.begin(),frac.end(),greater<>());
        for(int i = 0; i < hund; i++) {
            for(int j = 0; j < (int)v.size(); j++) {
                if(frac[i].s == v[j].s.s) {
                    v[j].f++;
                    break;
                }
            }
        }
    }

    sort(v.begin(),v.end(),greater<>());
    for(auto it : v) {
        if(it.f <= 0) {
            break;
        }
        cout << it.s.s << " " << it.f << " " << it.s.f << '\n';
    }

    return 0;
}