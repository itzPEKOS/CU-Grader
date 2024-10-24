#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int date[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool leap_yr(int year) {
    year -= 543;
    if(year%400 == 0) {
        return true;
    } else if(year%100 == 0) {
        return false;
    } else if(year%4 == 0) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int d, m, y;
    cin >> d >> m >> y;
    if(leap_yr(y)) date[2] = 29;
    d += 15;
    if(d > date[m]) {
        d -= date[m];
        m += 1;
    }
    if(m > 12) {
        m -= 12;
        y += 1;
    }
    cout << d << '/' << m << '/' << y;

    return 0;
}