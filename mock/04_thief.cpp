#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, sum, tmp = 0;
    cin >> n >> sum;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        tmp += arr[i];
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(tmp-arr[i]-arr[j] == sum) {
                cout << i << ' ' << arr[i] << '\n' << j << ' ' << arr[j];
            }
        }
    }

    return 0;
}