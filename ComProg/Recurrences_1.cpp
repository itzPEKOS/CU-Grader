#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int F(int n);
int M(int n);

int H(int n) { // Tower of Hanoi
    if(n == 0) return 0;
    return 2*H(n-1)+1;
}
int C(int n) { // Catalan Number
    if(n == 0) return 1;

    ll res = 0;
    for(int i = 0; i < n; i++) {
        res += C(i) * C(n-i-1);
    }
    return res;
}
int F(int n) { // Female sequence
    if(n == 0) return 1;
    return n-M(F(n-1));
}
int M(int n) { // Male sequence
    if(n == 0) return 0;
    return n-F(M(n-1));
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
            cout << fn << '(' << p << ") = " << func[fn](p) << endl;
        }

    return 0;
}