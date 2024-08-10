#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    float scr[4];
    for(int i = 0; i < 4; i++) cin >> scr[i];
    for(int i = 0; i < 3; i++) {
        for(int j = i+1; j < 4; j++) {
            if(scr[i] > scr[j]) {
                float tmp = scr[i];
                scr[i] = scr[j];
                scr[j] = tmp;
            }
        }
    }
    // for(int i = 0; i < 4; i++) cout << scr[i] << " ";
    float ans = (scr[1]+scr[2])/2.0;
    if(ans-round(ans*100.0)/100.0 > 0.004) ans += 0.01;
    cout << round(ans*100.0)/100.0;

    return 0;
}