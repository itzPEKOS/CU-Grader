#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<string> bwt;
    string str;
    cin >> str;
    int l = str.length();
    for(int i = 0; i < l+1; i++) {
        string tmp = "";
        for(int j = i; j < l; j++) {
            tmp += str[j];
        }
        tmp += '$';
        for(int j = 0; j <= i-1; j++) {
            tmp += str[j];
        }
        bwt.push_back(tmp);
        // cout << tmp << '\n';
    }
    sort(bwt.begin(),bwt.end());
    
    for(string it : bwt) {
        cout << it[l];
    }

    return 0;
}