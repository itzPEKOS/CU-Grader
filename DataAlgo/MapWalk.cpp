#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int r, c;
int board[1001][1001];
bool vis[1001][1001];

void bfs(int i,int j,string move) {
    if(i >= r || i < 0 || j >= c || board[i][j] == 1 || vis[i][j]) return;

    vis[i][j] = true;

    if(i == r-1 && j == c-1) {
        cout << move << '\n';
        vis[i][j] = false;
        return;
    }
    bfs(i,j+1,move+'A');
    bfs(i+1,j,move+'B');
    bfs(i-1,j,move+'C');

    vis[i][j] = false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> r >> c;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> board[i][j];
            vis[i][j] = false;
        }
    }
    bfs(0,0,"");
    cout << "DONE";

    return 0;
}