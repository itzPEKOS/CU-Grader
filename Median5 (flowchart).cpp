#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a, b, c, d, e, tmp;
    cin >> a >> b >> c >> d >> e;
    if(a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(c > d) {
        tmp = c;
        c = d;
        d = tmp;
    }
    if(a > c) {
        tmp = b;
        b = d;
        d = tmp;
        c = a;
    }
    a = e;
    if(a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(c > a) {
        tmp = b;
        b = d;
        d = tmp;
        a = c;
    }
    if(a > d) {
        cout << d;
    } else {
        cout << a;
    }

    return 0;
}