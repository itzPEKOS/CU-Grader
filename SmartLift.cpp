#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k;
    cin >> n;
    int LS[n], LD[n];
    for(int i = 0; i < n; i++) {
        cin >> k;
        cin >> LS[k-1] >> LD[k-1];
    }
    int m;
    cin >> m;
    while(m--) {
        int US, UD;
        cin >> US >> UD;
        int nfloors[n] = {0};
        for(int i = 0; i < n; i++) {
            if(US < UD && LS[i] < LD[i]) {
                if(LS[i] <= US) {
                    nfloors[i] = max(UD-LD[i], 0);
                } else {
                    nfloors[i] = LD[i] - US + UD - US;
                }
            } else if(UD < US && LD[i] < LS[i]) {
                if(LS[i] >= US) {
                    nfloors[i] = max(LD[i]-UD, 0);
                } else {
                    nfloors[i] = US - LD[i] + US - UD;
                }
            } else {
                nfloors[i] = abs(LD[i] - US) + abs(US-UD);
            }
        }
        int min_i = 0;
        for(int i = 1; i < n; i++) {
            if(nfloors[i] < nfloors[min_i]) {
                min_i = i;
            }
        }
        cout << ">> " << min_i + 1 << '\n';
    }

    return 0;
}