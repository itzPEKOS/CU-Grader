#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    cin >> str;
    char last = str[0];
    int cnt = 1, f = 1;
    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i] != last) {
            if(f == 1) {
                cout << last << ' ' << cnt;
                f = 0;
            }
            else {
                cout << ' ' << last << ' ' << cnt;
            }
            last = str[i];
            cnt = 1;
        } else {
            cnt++;
        }
    }
    if(f == 1) {
        cout << last << ' ' << cnt;
    }
    else {
            cout << ' ' << last << ' ' << cnt;
    }

    return 0;
}