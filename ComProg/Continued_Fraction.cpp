#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    double ans[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        ans[i] = arr[i];
    }
    for(int i = n-1; i >= 0; i--) {
        for(int j = i-1; j >= 0; j--) {
            if(i == 0) {
                ans[i] = arr[j];
            } else {
                ans[i] = arr[j] + 1.0/ans[i];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << setprecision(10) << ans[i] << '\n';
    }

    return 0;
}