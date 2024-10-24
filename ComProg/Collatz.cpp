#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<int> v;
    int n;
    cin >> n;
    v.push_back(n);
    while(n != 1) {
        if(n%2 == 0) {
            n /= 2;
        } else {
            n = 3*n + 1;
        }
        v.push_back(n);
    }
    int mx = max(0,(int)(v.size())-15);
    cout << v[mx];
    for(int i = mx+1; i < (int)v.size(); i++) {
        cout << "->" << v[i];
    }

    return 0;
}