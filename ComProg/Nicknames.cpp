#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

unordered_map<string,string> name = {{"Robert","Dick"},
                                     {"William","Bill"},
                                     {"James","Jim"},
                                     {"John","Jack"},
                                     {"Margaret","Peggy"},
                                     {"Edward","Ed"},
                                     {"Sarah","Sally"},
                                     {"Andrew","Andy"},
                                     {"Anthony","Tony"},
                                     {"Deborah","Debbie"},
                                     {"Dick","Robert"},
                                     {"Bill","William"},
                                     {"Jim","James"},
                                     {"Jack","John"},
                                     {"Peggy","Margaret"},
                                     {"Ed","Edward"},
                                     {"Sally","Sarah"},
                                     {"Andy","Andrew"},
                                     {"Tony","Anthony"},
                                     {"Debbie","Deborah"}};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    string str;
    cin >> n;
    while(n--) {
        cin >> str;
        auto i = name.find(str);
        if(i == name.end()) {
            cout << "Not found\n";
        } else {
            cout << (*i).second << '\n';
        }
    }

    return 0;
}