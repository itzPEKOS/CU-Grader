#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int dx[] = {1,0,-1,0}, dy[] = {0,-1,0,1};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int r, c;
    cin >> r >> c;
    int arr[r][c];
    vector<vector<int>> dis(r,(vector<int>(c,INT_MAX)));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    dis[0][0] = 0;
    priority_queue<pair<int,pii>> pq;
    pq.push({0,{0,0}});

    while(!pq.empty()) {
        auto it = pq.top();
        int w = -it.f, ni = it.s.f, nj = it.s.s;
        pq.pop();

        if(w > dis[ni][nj]) continue;

        for(int i = 0 ; i < 4; i++) {
            int x = ni + dx[i], y = nj + dy[i];
            if(x >= 0 && x < r && y >= 0 && y < c) {
                if(dis[x][y] > w + arr[x][y]) {
                    dis[x][y] = w + arr[x][y];
                    pq.push({-dis[x][y],{x,y}});
                }
            }
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << dis[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}