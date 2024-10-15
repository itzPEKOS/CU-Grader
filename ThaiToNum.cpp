#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,int> dig = {
        {"soon", 0}, {"neung", 1}, {"et", 1}, {"song", 2}, {"yi", 2},{"sam", 3},
        {"si", 4}, {"ha", 5}, {"hok", 6}, {"chet", 7},
        {"paet", 8}, {"kao", 9}, {"sip", 10}
    };
map<string,int> mult = {
        {"sip", 10}, {"roi", 100}, {"phan", 1000}, {"muen", 10000},
        {"saen", 100000}, {"lan", 1000000}
    };

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string th;
    while(getline(cin,th)) {
        if(th == "q") break;

        vector<string> word;
        stringstream ss(th);
        string w;
        while(ss >> w) {
            word.push_back(w);
        }

        int op = 1, ans = 0;
        while(!word.empty()) {
            if(dig.find(word.back()) != dig.end()) {
                if(op == 10) ans += dig[word.back()] * op -10;
                else ans += dig[word.back()] * op;
            }
            if(mult.find(word.back()) != mult.end()) {
                op = mult[word.back()];
            }
            word.pop_back();
        }

        if(ans == 0 && op != 1) {
            ans += op;
        }

        cout << ans << '\n';
    }

    return 0;
}