#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, a = 1, b = 2, md = 100000007;
    cin >> n;
    while(n--) {
        b = (2 * a + b)%md;
        a = (b - a + md)%md;
    }
    cout << a;

    return 0;
}