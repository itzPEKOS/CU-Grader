#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, num, ans = INT_MIN;
    cin >> n;
    int arr[n+1][n+1] = {0};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> num;
            arr[i][j] = arr[i-1][j-1] + num;
            for(int k = 1; k <= i && k <= j; k++) {
                ans = max(ans,arr[i][j]-arr[i-k][j-k]);
            }
        }
    }
    cout << ans;

    return 0;
}