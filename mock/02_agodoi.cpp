#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    unordered_set<int> s;
    int a[100001];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    for(int i = 0; i < n; i++) {
        if(i > 0) cout << " ";
        cout << (s.find(a[i] * 2) != s.end() ? 1 : 0);
    }

    return 0;
}