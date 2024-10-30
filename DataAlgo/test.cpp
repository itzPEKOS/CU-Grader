#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    set<int> s = {1,3,7,4,5};
    auto it = s.begin();
    it++;
    cout << *it;
  
    return 0;
}