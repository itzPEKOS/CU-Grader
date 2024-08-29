#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int F(int n) { // Fibonacci number
    if(n == 1) return 1;
    if(n == 0) return 0;
    return F(n-2) + F(n-1);
}
int M(int n) { // Motzkin number
    if(n <= 1) return 1;
    int sum = 0;
    for(int i = 0; i <= n-2; i++) {
        sum += M(i) * M(n-2-i);
    }
    return M(n-1) + sum;
}
int S(int n) { // Schröder–Hipparchus Number
    if(n <= 2) return 1;
    return ((6*n-9)*S(n-1) - (n-3)*S(n-2))/n;
}
int D(int n) { // Derangement
    if(n == 0) return 1;
    return n*D(n-1) + pow(-1,n);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
            cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }

    return 0;
}