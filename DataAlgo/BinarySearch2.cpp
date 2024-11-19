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
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        int l = 0, r = n, mid, ans = -1;
        while(l < r) {
            mid = (l+r)/2;
            if(arr[mid] <= a) {
                ans = arr[mid];
                l = mid+1;
            } else {
                r = mid;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}