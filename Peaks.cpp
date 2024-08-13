#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    float arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i < n-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}