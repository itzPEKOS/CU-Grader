#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

set<int> un, in, dif;

set<int> U(set<int> now) {
    set<int> tmp = un;
    for(auto it : now) {
        tmp.insert(it);
    }
    return tmp;
}

set<int> I(set<int> now) {
    set<int> tmp;
    for(auto it : in) {
        if(now.find(it) != in.end()) {
            tmp.insert(it);
        }
    }
    return tmp;
}

set<int> D(set<int> now) {
    set<int> tmp = dif;
    for(auto it : dif) {
        if(now.find(it) == dif.end()) {
            tmp.insert(it);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string num;
    int chk = 1;
    while(getline(cin,num)) {
        string n = "";
        set<int> now;
        for(int i = 0; num[i] != '\0'; i++) {
            if(num[i] == ' ') {
                if(chk) {
                    un.insert(stoi(n));
                    in.insert(stoi(n));
                    dif.insert(stoi(n));
                } else {
                    now.insert(stoi(n));
                }
                num = "";
            } else {
                n += num[i];
            }
        }
        if(chk) {
            un.insert(stoi(n));
            in.insert(stoi(n));
            dif.insert(stoi(n));
        } else {
            now.insert(stoi(n));
        }
        if(!chk) {
            un = U(now);
            in = I(now);
            dif = D(now);
        }
        chk = 0;
    }

    return 0;
}