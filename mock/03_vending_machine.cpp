#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll cost, ans = 0;
    cin >> cost;
    cin.ignore();
    string str, tmp = "";
    getline(cin,str);
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            tmp += str[i];
        }
        if(str[i] == ' ' || i == str.length()-1 && tmp != "") {
            ans += stoll(tmp);
            tmp = "";
        }
    }
    cout << ans*cost;

    return 0;
}