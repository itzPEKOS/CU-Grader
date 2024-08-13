#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str, tmp = "", ans = "";
    int rmv, cnt = 1;
    char last;
    cin >> str;
    cin >> rmv;
    for(int i = 0; str[i] != '\0'; i++) {
        if(i == 0) {
            last = str[i];
            tmp += str[i];
        }
        else if(str[i] == last) {
            tmp += str[i];
            cnt++;
        } else {
            if(cnt < rmv) {
                ans += tmp;
            }
            tmp = "";
            tmp += str[i];
            last = str[i];
            cnt = 1;
        }
    }
    if(cnt < rmv) {
        ans += tmp;
    }
    cout << ans;

    return 0;
}