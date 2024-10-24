#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    double xm, ym, xe, ye, re, rp;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    double a, A, b, B, c, C;
    c = re-rp;
    C = sqrt(pow((xm-xe),2)+pow((ym-ye),2));
    A = xm-xe;
    B = ym-ye;
    a = c/C*A;
    b = c/C*B;
    // cout << c;
    // cout << a << ' ' << b;
    cout << round(xe+a) << " " << round(ye+b);

    return 0;
}