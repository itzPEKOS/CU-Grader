#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    map<string,float> curr = {{"THB",1.0}};
    int n;
    cin >> n;
    string ct, last_ct, current_ct;
    float c;
    for(int i = 0; i < n; i++) {
        cin >> ct >> c;
        curr[ct] = c;
    }
    int mon;
    bool th = false;
    cin >> mon >> last_ct;
    cout << mon << " " << last_ct;
    if(last_ct == "THB") th = true;
    while(cin >> current_ct) {
        if(th && current_ct != "THB") {
            mon /= curr[current_ct];
        } else if(!th && current_ct == "THB") {
            mon *= curr[last_ct];
        } else if(!th && current_ct != "THB") {
            mon *= curr[last_ct]/curr[current_ct];
        }
        if(current_ct != "THB") th = false;
        else th = true;
        last_ct = current_ct;
        cout << " -> " << mon << " " << current_ct;
    }

    return 0;
}