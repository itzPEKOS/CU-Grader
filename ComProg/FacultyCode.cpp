#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

string id[28] = {"01","02","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","51","53","55","58"};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string code;
    cin >> code;
    for(int i = 0; i < 27; i++) {
        if(code == id[i]) {
            cout << "OK";
            return 0;
        }
    }
    cout << "Error";

    return 0;
}