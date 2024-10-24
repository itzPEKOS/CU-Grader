#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int r, c;
    cin >> r >> c;
    float arr[r][c], ans[r-2][c-2];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i < r-1; i++) {
        for(int j = 1; j < c-1; j++) {
            ans[i-1][j-1] = arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j-1]+arr[i][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
        }
    }
    for(int i = 0; i < r-2; i++) {
        for(int j = 0; j < c-2; j++) {
            cout << round((ans[i][j]/9.0)*100.0)/100.0 << ' ';
        }
        cout << '\n';
    }

    return 0;
}