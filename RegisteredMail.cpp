#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int w;
    cin >> w;
    if(w > 2000) cout << "Reject";
    else if(w > 1000) cout << 58;
    else if(w > 500) cout << 38;
    else if(w > 250) cout << 28;
    else if(w > 100) cout << 22;
    else cout << 18;

    return 0;
}