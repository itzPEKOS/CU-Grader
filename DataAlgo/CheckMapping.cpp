#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    set<ll> s, tmp;
    int n, N;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> N;
        s.insert(N);
    }
    for(int i = *s.begin(); i <= *s.end(); i++) {
        tmp.insert(i);
    }
    if(s == tmp && s.size() == n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}