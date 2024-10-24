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
    for(int i = 1; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            cout << '.';
        }
        for(int j = 1; j < i*2; j++) {
            if(j == 1 || j == i*2-1 || i == n) {
                cout << '*';
            } else {
                cout << '.';
            }
        }
        cout << '\n';
    }

    return 0;
}