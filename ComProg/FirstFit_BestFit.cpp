#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int sum(vector<int> v) {
    int sm = 0;
    for(auto it : v) {
        sm += it;
    }

    return sm;
}

vector<vector<int>> first_fit(vector<int> v) {
    vector<vector<int>> ans;
    for(auto num : v) {
        bool added = false;
        for(auto & a : ans) {
            if(sum(a) + num <= 100) {
                a.push_back(num);
                added = true;
                break;
            }
        }
        if(!added) {
            ans.push_back({num});
        }
    }

    return ans;
}

vector<vector<int>> best_fit(vector<int> v) {
    vector<vector<int>> ans;
    for(auto num : v) {
        int min_r = 100, min_idx = -1;
        for(int i = 0; i < ans.size(); i++) {
            int r = 100 - (sum(ans[i]) + num);
            if(r >= 0 && r < min_r) {
                min_r = r;
                min_idx = i;
            }
        }
        if(min_idx == -1) {
            ans.push_back({num});
        } else {
            ans[min_idx].push_back(num);
        }
    }

    return ans;
}

void print_ans(vector<vector<int>> v) {
    //{100-sum(it),it.size(),vector<int> it}
    vector<tuple<int,int,vector<int>>> ans;
    for(auto & it : v) {
        sort(it.begin(),it.end());
        ans.push_back({100-sum(it),it.size(),it});
    }
    sort(ans.begin(),ans.end());
    for(auto it : ans) {
        for(auto n : get<2>(it)) {
            cout << n << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string cmd;
    cin >> cmd;
    vector<int> num;
    int n;
    while(cin >> n) {
        num.push_back(n);
    }
    if(cmd == "first") {
        print_ans(first_fit(num));
    } else {
        print_ans(best_fit(num));
    }

    return 0;
}