#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    double x;
    cin >> x;
    cout << round(((pow(x,sqrt(log(pow((x+1),2.0)))))/(10.0-x))*1e6)/1e6;

    return 0;
}