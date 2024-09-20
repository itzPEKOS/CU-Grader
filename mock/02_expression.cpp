#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    double x, top, btm;
    cin >> x;
    top = sqrt((x*x) + pow(cos(x*M_PI/180),2));
    btm = sin(x*M_PI/180) + (pow(cos(x*M_PI/180),3)/(x*x+1)*1.0);
    cout << fixed << setprecision(1) << top/btm * 1.0;

    return 0;
}