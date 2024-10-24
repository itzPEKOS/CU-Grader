#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

// long cnt(long a) {
//     int i = 0;
//     while(a > 0) {
//         a /= 10;
//         i++;
//     }
//     return i;
// }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string a, b, c;
    cin >> a >> b >> c;
    long top, btm, B, C, _gcd;
    B = b.length();
    C = c.length();
    top = (stoi(a)*pow(10,B+C) + stoi(b)*pow(10,C) + stoi(c)) - (stoi(a)*pow(10,B) + stoi(b));
    btm = pow(10,B+C) - pow(10,B);
    _gcd = gcd(top,btm);
    cout << top/_gcd << " / " << btm/_gcd;

    return 0;
}