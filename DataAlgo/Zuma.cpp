#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    list<int> beads;
    int n, m, k;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        beads.push_back(p);
    }
    auto it = next(beads.begin(),m);
    it = beads.insert(it,1,k);

    if(it != beads.begin() && *prev(it) == k && (*next(it) != k || next(it) == beads.end())) it--;
    if(it != beads.begin() && *prev(it) != k && (*next(it) == k || next(it) == beads.end())) it++;

    while(it != beads.end()) {
        k = *it;
        if(it != beads.begin() && it != beads.end() && *prev(it) == k && *next(it) == k) {
            while(*prev(it) == k && it != beads.begin()) beads.erase(prev(it));
            while(*next(it) == k && next(it) != beads.end()) beads.erase(next(it));
            it = beads.erase(it);
            if(it == beads.end() && it != beads.begin()) it--;
        } else {
            break;
        }
    }
    for(auto i : beads) {
        cout << i << " ";
    }

    return 0;
}