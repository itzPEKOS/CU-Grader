#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int num;
    cin >> num;

    if(num > 0) cout << "positive\n";
    else if(num < 0) cout << "negative\n";
    else cout << "zero\n";

    if(num%2 == 0) cout << "even";
    else cout << "odd";

    return 0;
}