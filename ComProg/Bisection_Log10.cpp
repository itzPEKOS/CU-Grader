#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    double a, x, X;
    cin >> a;
    double L = 0, U = a;
    do {
        x = (L+U)/2;
        X = pow(10,x);
        if(X > a) U = x;
        else if(X < a) L = x;
    } while(U-L > 1e-10);
    x = (L+U)/2;
    cout << x;

    return 0;
}