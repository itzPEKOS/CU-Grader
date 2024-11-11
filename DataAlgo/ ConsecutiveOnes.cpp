#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int k;
string cons;

void comb(int n,string &sol,int len) {
    if(len < n) {
        sol += '0';
        comb(n,sol,len+1);
        sol.pop_back();
        sol += '1';
        comb(n,sol,len+1);
        sol.pop_back();
    } else {
        if(sol.find(cons) != string::npos) {
            cout << sol << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n >> k;
    string sol = "";
    for(int i = 0; i < k; i++) {
        cons += '1';
    }
    comb(n,sol,0);

    return 0;
}