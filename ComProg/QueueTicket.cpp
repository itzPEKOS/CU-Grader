#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    string cmd;
    vector<pii> q;
    vector<int> order_wait;
    int start, t, ot, j = 0;
    for(int i = 0; i < n; i++) {
        cin >> cmd;
        if(cmd == "reset") {
            cin >> start;
        }
        if(cmd == "new") {
            cin >> t;
            q.push_back({start,t});
            cout << ">> ticket " << start << '\n';
            start++;
        }
        if(cmd == "next") {
            cout << ">> call " << q[j].f << '\n';
            j++;
        }
        if(cmd == "order") {
            cin >> ot;
            cout << ">> qtime " << q[j-1].f << " " << ot-q[j-1].s << '\n';
            order_wait.push_back(ot-q[j-1].s);
        }
        if(cmd == "avg_qtime") {
            cout << ">> avg_qtime ";
            int sum = 0;
            for(int it : order_wait) {
                sum += it;
            }
            cout << round((sum*1.0/(int)order_wait.size()*1.0)*100.0)/100.0 << '\n';
        }
    }

    return 0;
}