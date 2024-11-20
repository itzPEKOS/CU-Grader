#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while(m--) {
        int a, ans = -1, l = 0, r = n, mid;
        cin >> a;
        while(l < r) {
            mid = (l+r) / 2;
            if(arr[mid] > a) {
                r = mid;
            } else {
                l = mid+1;
                ans = l-1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}