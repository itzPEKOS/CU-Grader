#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int cnt = 0;

void heap(int arr[],int node,int n) {
    if(node >= n) return;
    arr[node] = 1;
    cnt++;
    heap(arr,node*2+1,n);
    heap(arr,node*2+2,n);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    if(m == 0) {
        cout << 0 << '\n';
        return 0;
    }
    int arr[n] = {0};
    heap(arr,m,n);
    cout << n-cnt << '\n';
    for(int i = 0; i < n; i++) {
        if(!arr[i]) {
            cout << i << " ";
        }
    }

    return 0;
}