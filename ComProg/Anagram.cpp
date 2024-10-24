#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    multiset<char> ms, ana;
    string str;
    getline(cin,str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        if((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= '0' && str[i] <= '9')) {
            ms.insert(str[i]);
        }
    }
    getline(cin,str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        if((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= '0' && str[i] <= '9')) {
            ana.insert(str[i]);
        }
    }
    // for(char c : ms) {
    //     cout << c << " ";
    // }
    // cout << '\n';
    // for(char c : ana) {
    //     cout << c << " ";
    // }
    if(ms == ana) cout << "YES";
    else cout << "NO";

    return 0;
}