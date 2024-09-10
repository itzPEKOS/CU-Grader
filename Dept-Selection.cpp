#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,int> dept;
// map<string,vector<string>> select;
map<string,string> ans;
// vector<pair<double,string>> srt;
vector<tuple<double, string, vector<string>>> ns;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    string d;
    int no;
    for(int i = 0; i < n; i++) {
        cin >> d >> no;
        dept[d] = no;
    }
    
    cin >> n;
    double sc;
    string id;
    for(int i = 0; i < n; i++) {
        cin >> id >> sc;
        vector<string> input;
        for(int j = 0; j < 4; j++) {
            cin >> d;
            input.push_back(d);
        }
        ns.push_back({sc,id,input});
    }
    
    sort(ns.begin(), ns.end(), greater<>());

    for(auto i : ns) {
        for(auto j : get<2>(i)) {
            if(dept[j] > 0) {
                dept[j]--;
                ans[get<1>(i)] = j;
                break;
            }
        }
    }
    // sort(srt.begin(), srt.end(), greater<>());

    // for(auto i : srt) {
    //     for(auto j : select[i.s]) {
    //         if(dept[j] > 0) {
    //             dept[j]--;
    //             ans[i.s] = j;
    //             break;
    //         }
    //     }
    // }
    for(auto it : ans) {
        cout << it.f << " " << it.s << '\n';
    }


    return 0;
}