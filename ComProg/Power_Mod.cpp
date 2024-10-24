#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int power_mod(int a,int k,int m) {
    if(k == 0) {
        return 1;
    }
    int half = power_mod(a,k/2,m);
    half = (half*half)%m;
    if(k%2 == 1) {
        half = (half*a)%m;
    }
    return half;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a, m;
    ll k;
    cin >> a >> k >> m;
    cout << power_mod(a,k,m);


    return 0;
}