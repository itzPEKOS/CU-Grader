    #include <bits/stdc++.h>

    #define f first
    #define s second
    #define ll long long
    #define pii pair<int, int>

    using namespace std;

    int r, c;
    int grid[1002][1002];
    int vis[1002][1002];
    int l = 1, loop, mx;

    void dfs(int i, int j, int w, int type) {
        if(vis[i][j] == l) {
            loop++;
            mx = max(mx,w);
            return;
        }
        vis[i][j] = l;
        if(grid[i][j] == 1) {
            int ii = i, jj = j-1;
            if((grid[ii][jj] == 1 || grid[ii][jj] == 3 || grid[ii][jj] == 4) && type != 2) {
                dfs(ii,jj,w+1,4);
                return;
            }
            ii = i, jj = j+1;
            if((grid[ii][jj] == 1 || grid[ii][jj] == 5 || grid[ii][jj] == 6) && type != 4) {
                dfs(ii,jj,w+1,2);
                return;
            }
        }
        if(grid[i][j] == 2) {
            int ii = i-1, jj = j;
            if((grid[ii][jj] == 2 || grid[ii][jj] == 4 || grid[ii][jj] == 5) && type != 1) {
                dfs(ii,jj,w+1,3);
                return;
            }
            ii = i+1, jj = j;
            if((grid[ii][jj] == 2 || grid[ii][jj] == 3 || grid[ii][jj] == 6) && type != 3) {
                dfs(ii,jj,w+1,1);
                return;
            }
        }
        if(grid[i][j] == 3) {
            int ii = i-1, jj = j;
            if((grid[ii][jj] == 2 || grid[ii][jj] == 4 || grid[ii][jj] == 5) && type != 1) {
                dfs(ii,jj,w+1,3);
                return;
            }
            ii = i, jj = j+1;
            if((grid[ii][jj] == 1 || grid[ii][jj] == 5 || grid[ii][jj] == 6) && type != 4) {
                dfs(ii,jj,w+1,2);
                return;
            }
        }
        if(grid[i][j] == 4) {
            int ii = i, jj = j+1;
            if((grid[ii][jj] == 1 || grid[ii][jj] == 5 || grid[ii][jj] == 6) && type != 4) {
                dfs(ii,jj,w+1,2);
                return;
            }
            ii = i+1, jj = j;
            if((grid[ii][jj] == 2 || grid[ii][jj] == 3 || grid[ii][jj] == 6) && type != 3) {
                dfs(ii,jj,w+1,1);
                return;
            }
        }
        if(grid[i][j] == 5) {
            int ii = i+1, jj = j;
            if((grid[ii][jj] == 2 || grid[ii][jj] == 3 || grid[ii][jj] == 6) && type != 3) {
                dfs(ii,jj,w+1,1);
                return;
            }
            ii = i, jj = j-1;
            if((grid[ii][jj] == 1 || grid[ii][jj] == 3 || grid[ii][jj] == 4) && type != 2) {
                dfs(ii,jj,w+1,4);
                return;
            }
        }
        if(grid[i][j] == 6) {
            int ii = i-1, jj = j;
            if((grid[ii][jj] == 2 || grid[ii][jj] == 4 || grid[ii][jj] == 5) && type != 1) {
                dfs(ii,jj,w+1,3);
                return;
            }
            ii = i, jj = j-1;
            if((grid[ii][jj] == 1 || grid[ii][jj] == 3 || grid[ii][jj] == 4) && type != 2) {
                dfs(ii,jj,w+1,4);
                return;
            }
        }
    }

    int main() {
        ios_base::sync_with_stdio(0); cin.tie(0);

        cin >> r >> c;

        for(int i = 1; i <= r; i++) {
            for(int j = 1; j <= c; j++) {
                cin >> grid[i][j];
            }
        }

        for(int i = 1; i <= r; i++) {
            for(int j = 1; j <= c; j++) {
                if(!vis[i][j]) {
                    dfs(i,j,0,-1);
                }
                l++;
            }
        }
        cout << loop << " " << mx;

        return 0;
    }