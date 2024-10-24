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
    for(auto it : now) {
        if(in.find(it) != in.end()) {
            tmp.insert(it);
        }
    }
    return tmp;
}

set<int> D(set<int> now) {
    set<int> tmp;
    for(auto it : dif) {
        if(now.find(it) == now.end()) {
            tmp.insert(it);
        }
    }
    return tmp;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string line;
    int chk = 1;
    while(getline(cin,line)) {
        string n = "";
        set<int> now;
        for(int i = 0; line[i] != '\0'; i++) {
            if(line[i] == ' ') {
                int num = stoi(n);
                if(chk) {
                    un.insert(num);
                    in.insert(num);
                    dif.insert(num);
                } else {
                    now.insert(num);
                }
                n = "";
            } else {
                n += line[i];
            }
        }
        if(!n.empty()) {
            int num = stoi(n);
            if(chk) {
                un.insert(num);
                in.insert(num);
                dif.insert(num);
            } else {
                now.insert(num);
            }
        }
        if(!chk) {
            un = U(now);
            in = I(now);
            dif = D(now);
        }
        chk = 0;
    }
    cout << "U:";
    if(un.size() <= 0) {
        cout << " empty set";
    } else {
        for(auto it : un) {
            cout << " " << it;
        }
    }
    cout << "\nI:";
    if(in.size() <= 0) {
        cout << " empty set";
    } else {
        for(auto it : in) {
            cout << " " << it;
        }
    }
    cout << "\nD:";
    if(dif.size() <= 0) {
        cout << " empty set";
    } else {
        for(auto it : dif) {
            cout << " " << it;
        }
    }

    return 0;
}