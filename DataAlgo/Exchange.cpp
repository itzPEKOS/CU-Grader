#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int m;
    cin >> m;
    while(m--) {
        int n;
        cin >> n;
        bool chk = false;
        float dp[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> dp[i][j];
            }
        }
        for(int k = 0; k < n; k++) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    dp[i][j] = max(dp[i][j],dp[i][k] * dp[k][j]);
                    if(i == j && dp[i][j] > 1) {
                        chk = true;
                        break;
                    }
                }
                if(chk) break;
            }
            if(chk) break;
        }
        cout << (chk ? "YES" : "NO") << '\n';
    }

    return 0;
}