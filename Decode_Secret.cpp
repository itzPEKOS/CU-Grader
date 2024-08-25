#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string sec;
    while(getline(cin,sec)) {
        stack<char> st;
        int spe = 0;
        char chk = sec[sec.length()-1];
        for(int i = 0; sec[i] != '\0'; i++) {
            if(sec[i] == chk) {
                spe++;
            } else {
                if(spe%2 == 1) {
                    cout << sec[i];
                }
            }
        }
        cout << '\n';
    }

    return 0;
}