#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int m, inversions = 0, zero, k = 0;
    cin >> m;
    int puzz[m][m], tmp[m*m];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cin >> puzz[i][j];
            if(puzz[i][j] == 0) {
                zero = i;
            } else {
                tmp[k++] = puzz[i][j];
            }
        }
    }
    for(int i = 0; i < m*m-2; i++) {
        for(int j = i+1; j < m*m-1; j++){
            if(tmp[i] > tmp[j]) inversions++;
        }
    }
    bool chk;
    // cout << inversions << " << " << zero << " ";
    if(m%2 == 1) { 
        if(inversions%2 == 0) {
            chk = true;
        } else {
            chk = false;
        }
    } else {
        if(inversions%2 == 1) {
            if(zero%2 == 0) {
                chk = true;
            } else {
                chk = false;
            }
        } else {
            if(zero%2 == 1) {
                chk = true;
            } else {
                chk = false;
            }
        }
    }

    if(chk) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}