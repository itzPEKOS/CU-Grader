#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int cnt[26];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    getline(cin,str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        if(str[i] >= 'a' && str[i] <= 'z') {
            cnt[str[i]-'a']++;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(cnt[i] > 0) {
            cout << char(i+'a') << " -> " << cnt[i] << '\n';
        }
    }

    return 0;
}