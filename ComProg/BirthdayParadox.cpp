#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    float p, t = 1;
    int k = 1;
    cin >> p;
    while(1) {
        t = (t*(365.0-(k-1)))/365.0;
        if(1-t >= p) break;
        k++;
    }
    cout << k;

    return 0;
}