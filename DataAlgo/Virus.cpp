#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

vector<int> v;

bool virus(int start,int end,bool re) {
    int dif = end - start;
    if(dif == 2) {
        if(!re) {
            return v[start] == 0 && v[start+1] == 1;
        } else {
            return v[start] == 1 && v[start+1] == 0;
        }
    }
    int mid = (start + end) / 2;
    if(!re) {
        return (virus(start,mid,false) || virus(start,mid,true)) &&
                virus(mid,end,false);
    } else {
        return (virus(mid,end,false) || virus(mid,end,true)) &&
                virus(start,mid,true);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k;
    cin >> n >> k;
    int sz = 1<<k;
    v.resize(sz);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < sz; j++) {
            cin >> v[j];
        }
        cout << (virus(0,sz,false) ? "yes\n" : "no\n");
    }

    return 0;
}