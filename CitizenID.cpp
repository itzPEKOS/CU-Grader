#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string id;
    cin >> id;
    int tmp = 0;
    for(int i = 0, j = 13; i < 12; i++, j--) {
        tmp += j*(id[i]-'0');
    }
    tmp %= 11;
    int n12 = (11-tmp)%10;
    for(int i = 0; i < 12; i++) {
        cout << id[i];
        if(i == 0 || i == 4 || i == 9) {
            cout << '-';
        }
    }
    cout << '-' << n12;

    return 0;
}