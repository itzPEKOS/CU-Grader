#include <bits/stdc++.h>

using namespace std;

const int R = 7, C = 7;

void floodfill(int x[][C], int r, int c, int e) {
    if(x[r][c] == 1) return;

    if(x[r][c] == 0) {
        x[r][c] = e;
        if(r-1 >= 0) floodfill(x, r-1, c, e);
        if(r+1 < R) floodfill(x, r+1, c, e);
        if(c-1 >= 0) floodfill(x, r, c-1, e);
        if(c+1 < C) floodfill(x, r, c+1, e);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int x[][C] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}};
    for (int r=0; r<R; ++r)
        for (int c=0; c<C; ++c)
            cin >> x[r][c];
    int row, col, e;
    cin >> row >> col >> e;
    floodfill(x, row, col, e);
    for (int r=0; r<R; ++r) {
        for (int c=0; c<C; ++c)
            cout << x[r][c] << ' ';
        cout << endl;
    }

    return 0;
}