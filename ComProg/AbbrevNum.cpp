#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll sub;
    cin >> sub;
    if(sub < 1000) {
        cout << sub;
    } else if(sub < 1000000) {
        if(sub/1000 < 10) {
            cout << round((sub/1000.0)*10)/10.0;
        } else {
            cout << round(sub/1000.0);
        }
        cout << 'K';
    } else if(sub < 1000000000) {
        if(sub/1000000 < 10) {
            cout << round((sub/1000000.0)*10)/10.0;
        } else {
            cout << round(sub/1000000.0);
        }
        cout << 'M';
    } else {
        if(sub/1000000000 < 10) {
            cout << round((sub/1000000000.0)*10)/10.0;
        } else {
            cout << round(sub/1000000000.0);
        }
        cout << 'B';
    }

    return 0;
}