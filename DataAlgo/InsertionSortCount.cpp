#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<int,int> cnt;

void insertion_sort(vector<int> A,vector<int> B) {
    for(size_t i = 0; i < B.size(); i++) {
        for(size_t j = 0; A[j] != B[i]; j++) {
            if(A[j] > B[i]) cnt[B[i]]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), c(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> c[i];

    insertion_sort(a,c);

    for(auto it : c) {
        cout << cnt[it] << '\n';
    }

    return 0;
}