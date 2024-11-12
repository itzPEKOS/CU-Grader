#include <bits/stdc++.h>

#define pos first
#define hp second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, k, w;
    cin >> n >> m >> k >> w;
    pii monster[m];
    int towers[k];
    for(int i = 0; i < m; i++) {
        cin >> monster[i].pos;
    }
    for(int i = 0; i < m; i++) {
        cin >> monster[i].hp;
    }
    for(int i = 0; i < k; i++) {
        cin >> towers[i];
    }

    for(int i = 0; i < k; i++) {
        int mx_hp = 0;
        int mx_idx = -1;
        for(int j = 0; j < m; j++) {
            if(monster[j].pos >= towers[i] - w && monster[j].pos <= towers[i] + w) {
                if(mx_hp < monster[j].hp) {
                    mx_hp = monster[j].hp;
                    mx_idx = j;
                }
            }
        }
        if(mx_idx != -1) {
            monster[mx_idx].hp--;
        }
    }
    int sum = 0;
    for(int i = 0; i < m; i++) {
        sum += monster[i].hp;
    }
    cout << sum;

    return 0;
}