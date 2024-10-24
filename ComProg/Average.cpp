#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    float i = 0, num, sum = 0;
    while(cin >> num) {
        if(num == -1) break;
        sum += num;
        i++;
    }
    if(i == 0) {
        cout << "No Data";
        return 0;
    }
    cout << round((sum/i)*100.0)/100.0;

    return 0;
}