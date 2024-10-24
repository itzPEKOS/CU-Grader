#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

string dec2hex(int d) {
    if(d < 16) {
        string h = "";
        if(d > 9) {
            h += (d-10) + 'A';
        } else {
            h += d + '0';
        }
        return h;
    }
    return dec2hex(d/16) + dec2hex(d%16);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int d;
        while (cin >> d) {
        cout << d << " -> " << dec2hex(d) << endl;
    }

    return 0;
}