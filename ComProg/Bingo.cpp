#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

void show(vector<string> v, string free) {
    int f = 1;
    for(auto it : v) {
        if(it != free) {
            if(f) {
                cout << it;
                f = 0;
            } else {
                cout << ", " << it;
            }
        }
    }
    cout << '\n';
}

bool is_subset(vector<string> v1, vector<string> v2) {
    for(auto e : v1) {
        if(find(v2.begin(), v2.end(), e) == v2.end()) 
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<vector<string>> bingo;
    vector<string> s;
    char BINGO[5];
    string t;
    for(int i = 0; i < 5; i++) cin >> BINGO[i];
    for(int i = 0; i < 5; i++) {
        s.clear();
        for(int j = 0; j < 5; j++) {
            cin >> t;
            s.push_back(BINGO[j] + t);
        }
        bingo.push_back(s);
    }
    for(int i = 0; i < 5; i++) {
        s.clear();
        for(int j = 0; j < 5; j++) {
            s.push_back(bingo[j][i]);
        }
        bingo.push_back(s);
    }
    s.clear();
    for(int i = 0; i < 5; i++) s.push_back(bingo[i][i]);
    bingo.push_back(s);
    s.clear();
    for(int i = 0; i < 5; i++) s.push_back(bingo[4-i][i]);
    bingo.push_back(s);

    int cnt = 0;
    bool bing = false;
    vector<string> card = {bingo[2][2]};
    while(cin >> t) {
        card.push_back(t);
        if(!bing) {
            cnt++;
            for(auto b : bingo) {
                if(is_subset(b,card)) {
                    if(!bing) cout << cnt << '\n';
                    bing = true;
                    show(b,"N*");
                }
            }
        }
    }

    return 0;
}