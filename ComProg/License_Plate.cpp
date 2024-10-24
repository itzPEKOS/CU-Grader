#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string plate;
    int m;
    cin >> plate >> m;
    int num_p = stoi(plate.substr(4));
    m += num_p;
    num_p = m%1000;
    string num = to_string(num_p);
    num = string(3-num.length(),'0') + num;
    m /= 1000;
    m += plate[2]-'A';
    plate[2] = m%26 + 'A';
    m /= 26;
    m += plate[1]-'A';
    plate[1] = m%26 + 'A';
    m /= 26;
    m += plate[0]-'0';
    plate[0] = m%10 + '0';
    cout << plate.substr(0,4) << num;

    return 0;
}