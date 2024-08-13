#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int l[10001], r[10001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int x, y, i = 0;
    while(cin >> x) {
        if(x == -998 || x == -999) {
            break;
        }
        cin >> y;
        if(i%2 == 0) {
            l[i] = x;
            r[i] = y;
        } else {
            r[i] = x;
            l[i] = y;
        }
        i++;
    }
    sort(l,l+i);
    sort(r,r+i);
    if(x == -998) {
        cout << l[0] << " " << r[i-1];
    } else {
        cout << r[0] << " " << l[i-1];
    }

    return 0;
}