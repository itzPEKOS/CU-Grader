#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int date[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int d, m, y, ans = 0;
    cin >> d >> m >> y;
    int y2 = y-543;
    if((y2%400 == 0) || (y2%4 == 0 && y2%100 != 0)) {
        date[2] = 29;
    }
    for(int i = 1; i < m; i++) {
        ans += date[i];
    }
    cout << ans+d;

    return 0;
}