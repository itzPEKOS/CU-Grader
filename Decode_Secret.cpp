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
        int spe = 0, f = 1;
        char chk;
        for(int i = 0; sec[i] != '\0'; i++) {
            if((sec[i] >= 'a' && sec[i] <= 'z') || (sec[i] >= 'A' && sec[i] <= 'Z') || sec[i] == ' ') {
                if(spe%2 == 1) {
                    cout << sec[i];
                }
            } else {
                if(f) {
                    f = 0;
                    chk = sec[i];
                }
                if(sec[i] == chk) {
                    spe++;
                }
            }
        }
        cout << '\n';
    }

    return 0;
}