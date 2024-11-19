#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int arr[501][501];

void recur(int a,int b,int r,int c) {
    if(a == 0) {
        arr[r][c] = b;
        return;
    }
    int s = 1<<(a-1);
    recur(a-1,b,r,c);
    recur(a-1,b-1,r,c+s);
    recur(a-1,b+1,r+s,c);
    recur(a-1,b,r+s,c+s);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a, b;
    cin >> a >> b;
    recur(a,b,0,0);
    int sz = 1<<a;
    for(int i = 0; i < sz; i++) {
        for(int j = 0; j < sz; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}