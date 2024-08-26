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
    cin >> n;
    bool frnt = false;
    while(n != -1) {
        if(!frnt) {
            v.push_back(n);
        } else {
            v.insert(v.begin(),n);
        }
        frnt = !frnt;
        cin >> n;
    }
    cout << '[';
    for(auto it : v) {
        if(it == v[0]) {
            cout << it;
        } else {
            cout << ", " << it;
        }
    }
    cout << ']';

    return 0;
}