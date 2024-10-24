#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,float> icream, sales;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, q;
    cin >> n;
    string ic;
    float cost;
    for(int i = 0; i < n; i++) {
        cin >> ic >> cost;
        icream[ic] = cost;
    }

    cin >> n;
    float mx = -1, sum = 0;
    for(int i = 0; i < n ; i++) {
        cin >> ic >> q;
        if(icream.find(ic) != icream.end()) {
            sales[ic] += q * icream[ic];
            sum += q * icream[ic];
            mx = max(mx,sales[ic]);
        }
    }

    if(mx == -1) {
        cout << "No ice cream sales";
    } else {
        cout << "Total ice cream sales: " << sum << '\n';
        cout << "Top sales:";
        for(auto it : sales) {
            if(it.s == mx) {
                cout << " " << it.f;
            }
        }
    }

    return 0;
}