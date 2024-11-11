#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int a;

void comb(int n,vector<int> &sol,int len,int cnt) {
    if(len < n && cnt <= a) {
        sol[len] = 0;
        comb(n,sol,len+1,cnt);
        sol[len] = 1;
        comb(n,sol,len+1,cnt+1);
    } else {
        if(cnt == a) {
            for(int i = 0; i < n; i++) cout << sol[i];
            cout << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int b;
    cin >> a >> b;
    vector<int> sol(b);
    comb(b,sol,0,0);

    return 0;
}