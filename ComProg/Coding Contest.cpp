#include <bits/stdc++.h>
using namespace std;

map<string,int> p;
map<pair<string,int>,bool> chk;
map<pair<string,int>,int> pcnt;
map<string,int> sc;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int t, a;
        string team;
        char tf;
        cin >> t >> team >> a >> tf;
        pair<string,int> j = {team,a};
        if(tf == 'T') {
            if(!chk[j]) {
                p[team] += t + pcnt[j];
                sc[team]++;
                chk[j] = true;
            }
        } else if(tf == 'F') {
            if(!chk[j]) {
                pcnt[j] += 20;
            }
        }
    }
    // {score,penalty,teamname}
    vector<tuple<int,int,string>> v;
    for(auto it : sc) {
        v.push_back({-1*it.second, p[it.first], it.first});
        // cout << it.first << " ";
    }
    sort(v.begin(),v.end());
    // int cnt = 1;
    vector<tuple<string,int,int>> ans;
    ans.push_back({get<2>(v[0]),-1*get<0>(v[0]),get<1>(v[0])});
    for(size_t i = 1; i < v.size(); i++) {
        if(i < 3) {
            ans.push_back({get<2>(v[i]),-1*get<0>(v[i]),get<1>(v[i])});
        }
        else if(i > 2 && (get<0>(v[i]) == -1*get<1>(ans[2]) && 
            get<1>(v[i]) == get<2>(ans[2]))) {
            ans.push_back({get<2>(v[i]),-1*get<0>(v[i]),get<1>(v[i])});
        }
    }
    for(auto it : ans) {
        cout << get<0>(it) << " " << get<1>(it) << " " << get<2>(it) << '\n';
    }
}