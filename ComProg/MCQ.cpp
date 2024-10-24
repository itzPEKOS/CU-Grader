#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string ans, str;
    int cnt = 0;
    getline(cin,ans);
    getline(cin,str);
    if(ans.length() != str.length()) {
        cout << "Incomplete answer";
        return 0;
    }
    for(int i = 0; ans[i] != '\0'; i++) {
        if(ans[i] == str[i]) cnt++;
    }
    cout << cnt;

    return 0;
}