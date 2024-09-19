#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

ll ndigit(ll n) {
    int k = 1;
    ll nd = 1, tk = 10;
    while (n >= tk) {
        nd += tk/10*9*k;
        tk *= 10;
        k++;
    }
    nd += k*(n-tk/10+1);
    return nd;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll m, n;
    cin >> m >> n;
    cout << ndigit(n) - ndigit(m-1);

    return 0;
}