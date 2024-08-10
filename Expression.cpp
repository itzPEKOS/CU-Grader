#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int fac = 1;
    for(int i = 10; i > 0; i--) fac *= i;
    double a = M_PI-(fac/pow(8,8))+pow(log(9.7),(7/sqrt(71))-sin(40*M_PI/180));
    double b = pow(1.2,cbrt(2.3));
    cout << a/b;

    return 0;
}