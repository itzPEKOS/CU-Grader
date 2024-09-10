#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, ans = 0;
    cin >> n;
    int arr[n], ltr[n], rtl[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ltr[0] = arr[0];
    rtl[n-1] = arr[n-1];
    for(int i = 1; i < n; i++) {
        ltr[i] = max(arr[i],ltr[i-1]);
    }
    for(int i = n-2; i >= 0; i--) {
        rtl[i] = max(arr[i],rtl[i+1]);
    }
    for(int i = 0; i < n; i++) {
        ans += min(ltr[i],rtl[i]) - arr[i];
    }
    cout << ans;

    return 0;
}