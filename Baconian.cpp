#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,string> Bac = {{"UUUU","0"}, {"0","UUUU"},
                        {"UUUL","1"}, {"1","UUUL"},
                        {"UULU","2"}, {"2","UULU"},
                        {"UULL","3"}, {"3","UULL"},
                        {"ULUU","4"}, {"4","ULUU"},
                        {"ULUL","5"}, {"5","ULUL"},
                        {"ULLU","6"}, {"6","ULLU"},
                        {"ULLL","7"}, {"7","ULLL"},
                        {"LUUU","8"}, {"8","LUUU"},
                        {"LUUL","9"}, {"9","LUUL"},
                        {"LULU","-"}, {"-","LULU"},
                        {"LULL",","}, {",","LULL"}};

void E(string str,string c) {
    int l = str.length(), j = 0;
    for(int i = 0; i < l; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    for(int i = 0; i < c.length(); i++) {
        string b = "";
        b += c[i];
        b = Bac[b];
        for(int k = 0; k < 4; k++) {
            if(!(str[j%l] >= 'A' && str[j%l] <= 'Z')) {
                cout << str[j%l];
                j++;
            }
            if(b[k] == 'L') {
                cout << char(str[j%l] + 32);
            } else if(b[k] == 'U') {
                cout << str[j%l];
            }
            j++;
        }
    }
    cout << '\n';
}

void D(string str) {
    string c = "";
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            c += 'U';
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            c += 'L';
        }
        if(c.length() == 4) {
            cout << Bac[c];
            c = "";
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string st;
    getline(cin,st);
    string ln;
    while(getline(cin,ln)) {
        char order = ln[0];
        string code = ln.substr(2);
        if(order == 'E') {
            E(st,code);
        } else if(order == 'D') {
            D(code);
        }
    }

    return 0;
}