#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    float scr;
    cin >> scr;
    if(scr >= 80) {
        cout << "A";
    } else if(scr >= 70) {
        cout << "B";
    } else if(scr >= 60) {
        cout << "C";
    } else if(scr >= 50) {
        cout << "D";
    } else {
        cout << "F";
    }

    return 0;
}