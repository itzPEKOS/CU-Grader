#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<int> v{1,3,5,9,10};  

    // Finding upper bound for 35 and 45
    auto upper = upper_bound(v.begin(), v.end(), 2);
    auto lower = lower_bound(v.begin(), v.end(), 0);

    cout << upper - v.begin();
    cout << '\n' << lower - v.begin();
  
    return 0;
}