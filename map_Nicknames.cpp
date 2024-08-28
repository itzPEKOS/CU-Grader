#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    map<string,string> nickname;
    cin >> n;
    string f, nn;
    for(int i = 0; i < n; i++) {
        cin >> f >> nn;
        nickname[f] = nn;
        nickname[nn] = f;
    }
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> f;
        auto it = nickname.find(f);
        if(it == nickname.end()) {
            cout << "Not found\n";
        } else {
            cout << nickname[f] << '\n';
        }
    }

    return 0;
}