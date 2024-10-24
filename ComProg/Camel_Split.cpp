#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str, ans = ""; 
    cin >> str;
    int j = 0, i;
    for(i = 1; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') || ((str[i] >= 'a' && str[i] <= 'z') && (str[i-1] >= '0' && str[i-1] <= '9'))
        || ((str[i] >= '0' && str[i] <= '9') && !(str[i-1] >= '0' && str[i-1] <= '9'))) {
            ans += str.substr(j,i-j) + ", ";
            j = i;
        }
    }
    ans += str.substr(j,i-j);
    cout << ans;

    return 0;
}