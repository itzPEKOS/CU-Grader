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
    set<pii> st;
    for(int i = 0; i < n; i++) {
        int c, a, b;
        cin >> c;
        if(c == 1) {
            cin >> a >> b;
            st.insert({a,b});
            auto it = st.find({a,b});
            auto it_bf = it;
            it_bf--;
            if(it->f-1 <= it_bf->second && it != st.begin()) {
                a = it_bf->f;
                b = max(it->s,it_bf->s);
                st.erase(*it);
                st.erase(*it_bf);
                st.insert({a,b});
                it = st.find({a,b});
            }
            auto it_af = it;
            it_af++;
            while(it_af->f-1 <= it->s && it_af != st.end()) {
                a = it->f;
                b = max(it->s,it_af->s);
                st.erase(*it);
                st.erase(*it_af);
                st.insert({a,b});
                it = st.find({a,b});
                it_af = it;
                it_af++;
            }
        } else if(c == 2) {
            cout << st.size() << '\n';
        }
    }

    return 0;
}