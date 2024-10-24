#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    float a ,b ,c, rt;
    cin >> a >> b >> c;
    rt = sqrt(pow(b,2)-4*a*c);
    // cout << rt;
    cout << round((-b-rt)/(2*a)*1e3)/1e3 << " " << round((-b+rt)/(2*a)*1e3)/1e3;

    return 0;
}