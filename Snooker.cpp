#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string ball_order = "RYGNBPK", wrong = "WRONG_INPUT";
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string ball_seq, balls;
        getline(cin, ball_seq);
        bool r_in_odd = false;
        for(char b : ball_seq) {
            if(b != ' ') {
                balls += b;
                if(balls.size()%2 == 0 && b == 'R') {
                    r_in_odd = true;
                    break;
                }
            }
        }if(r_in_odd) {
            cout << wrong << '\n';
        } else {
            int k = 0, m = balls.size();
            for(; k < m; k+=2) {
                if(balls[k] != 'R') break;
            }
            if(k == 0 || k < m && ball_order.find(balls.substr(k)) != 1) {
                cout << wrong << '\n';
            } else {
                int sc = 0;
                for(char b : balls) {
                    sc += 1+ball_order.find(b);
                }
                cout << sc << '\n';
            }
        }
    }

    return 0;
}