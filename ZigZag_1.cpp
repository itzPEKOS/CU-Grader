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
    int l[n], r[n], a, b;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(i%2 == 0) {
            l[i] = a;
            r[i] = b;
        } else {
            r[i] = a;
            l[i] = b;
        }
    }
    sort(l,l+n);
    sort(r,r+n);
    string zz;
    cin >> zz;
    if(zz == "Zig-Zag") {
        cout << l[0] << " " << r[n-1];
    } else {
        cout << r[0] << " " << l[n-1];
    }

    return 0;
}