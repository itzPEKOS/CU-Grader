#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    double w, h;
    cin >> w >> h;
    cout << setprecision(15) << (sqrt(w*h))/60 << '\n';
    cout << setprecision(15) << 0.024265*pow(w,0.5378)*pow(h,0.3964) << '\n';
    cout << setprecision(15) << 0.0333*pow(w,(0.6157-0.0188*log10(w)))*pow(h,0.3);

    return 0;
}