#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string num;
    cin >> num;
    if(num.length() != 10) {
        cout << "Not a mobile number";
        return 0;
    }
    if(num[0] == '0' && (num[1] == '6' || num[1] == '8' || num[1] == '9')) {
        cout << "Mobile number";
    } else {
        cout << "Not a mobile number";
    }

    return 0;
}