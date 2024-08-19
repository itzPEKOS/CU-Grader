#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

void prnt(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, i;
    cin >> n;
    int pc[n], tmp[n];
    for(i = 0; i < n; i++) {
        cin >> pc[i];
        tmp[i] = pc[i];
    }
    sort(tmp,tmp+n);
    while(i >= 0) {
        for(int j = 0; j < i-1; i++) {
            if(pc[j] == tmp[i]) {

            }
        }
    }

    return 0;
}