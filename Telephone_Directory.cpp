#include <bits/stdc++.h>

#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    map<string,string> phone;
    string name, sur, pn;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name >> sur >> pn;
        name += " " + sur;
        phone[name] = pn;
        phone[pn] = name;
        // cout << name;
    }
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin,name);
        cout << name << " --> ";
        auto it = phone.find(name);
        if(it == phone.end()) {
            cout << "Not found\n";
        } else {
            cout << phone[name] << '\n';
        }
    }

    return 0;
}