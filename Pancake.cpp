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

void flip(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    int pc[n], srt[n];
    for (int i = 0; i < n; i++) {
        cin >> pc[i];
        srt[i] = pc[i];
    }
    
    sort(srt, srt + n);
    prnt(pc,n);

    for (int i = n - 1; i >= 0; i--) {
        if (pc[i] == srt[i]) continue;
        
        int j;
        for (j = 0; j <= i; j++) {
            if (pc[j] == srt[i]) break;
        }
        
        if (j != 0) {
            flip(pc, j + 1);
            prnt(pc, n);
        }

        flip(pc, i + 1);
        prnt(pc, n);
    }

    return 0;
}
