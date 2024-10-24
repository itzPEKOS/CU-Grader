#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int dig[10];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    getline(cin,str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            dig[str[i]-'0'] = 1;
        }
    }
    int first = 1, sum = 0;
    for(int i = 0; i < 10; i++) {
        if(dig[i] == 0) {
            if(first) {
                cout << i;
                first = 0;
            } else {
                cout << ',' << i;
            }
        }
        sum += dig[i];
    }
    if(sum == 10) cout << "None";

    return 0;
}