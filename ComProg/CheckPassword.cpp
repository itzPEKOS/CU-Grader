#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string pass;
    while(cin >> pass) {
        if(pass.empty()) break;
        if(pass.length() < 8) {
            cout << ">> invalid\n";
            continue;
        }
        bool num = false, cap = false, low = false, spe = false;
        for(int i = 0; pass[i] != '\0'; i++) {
            if(pass[i] >= 'a' && pass[i] <= 'z') low = true;
            else if(pass[i] >= 'A' && pass[i] <= 'Z') cap = true;
            else if(pass[i] >= '0' && pass[i] <= '9') num = true;
            else spe = true;
        }
        if(!num || !cap || !low) {
            cout << ">> invalid\n";
        }
        else if(pass.length() >= 12 && spe) {
            cout << ">> strong\n";
        } else {
            cout << ">> weak\n";
        }
    }

    return 0;
}