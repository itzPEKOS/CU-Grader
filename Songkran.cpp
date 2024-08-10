#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int be, y;
    cin >> be;
    be -= 543;
    y = be%100;
    cout << (y+y/4+11)%7;



    return 0;
}