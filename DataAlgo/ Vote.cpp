#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k;
    cin >> n >> k;
    unordered_map<string,int> name;
    for(int i = 0; i < n; i++) {
        string nm;
        cin >> nm;
        name[nm]++;
    }

    priority_queue<int> pq;
    for(auto it : name) {
        pq.push(it.s);
    }
    int tmp;
    while(k--) {
        if(pq.empty()) break;
        tmp = pq.top();
        pq.pop();
    }
    cout << tmp;

    return 0;
}