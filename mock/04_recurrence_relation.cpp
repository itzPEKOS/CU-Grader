#include <iostream>
using namespace std;

int S(int n, int k) {
    // Stirling numbers of the second kind
    if(n == 0 && k == 0) return 1;
    if(n == 0 || k == 0) return 0;
    return k * S(n-1,k) + S(n-1,k-1);
}

int B(int n) {
    // Bell number
    if (n == 0) return 1;

    int bell[n + 1][n + 1];

    bell[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        bell[i][0] = bell[i-1][i-1];
        for (int j = 1; j <= i; j++) {
            bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
        }
    }
    
    return bell[n][0];
}

int T(int n, int x) {
    // Chebyshev polynomials
    if(n == 1) return x;
    if(n == 0) return 1;
    return 2*x*T(n-1,x) - T(n-2,x);
}


int main() {
    string fn;
    int i, j;
    while (cin >> fn) {
        if (fn == "S") {
            cin >> i >> j;
            printf("S(%d, %d) = %d\n", i, j, S(i, j));
        }
        else if (fn == "B") {
            cin >> i;
            printf("B(%d) = %d\n", i, B(i));
        }
        else if (fn == "T") {
            cin >> i >> j;
            printf("T(%d, %d) = %d\n", i, j, T(i, j));
        }
    }
    return 0;
}
