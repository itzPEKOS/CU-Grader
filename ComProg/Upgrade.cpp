#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

vector<string> order;
map<string,string> grade;

void upgrade(string ID) {
    if(grade[ID] == "F") {
        grade[ID] = "D";
    } else if(grade[ID] == "D") {
        grade[ID] = "D+";
    } else if(grade[ID] == "D+") {
        grade[ID] = "C";
    } else if(grade[ID] == "C") {
        grade[ID] = "C+";
    } else if(grade[ID] == "C+") {
        grade[ID] = "B";
    } else if(grade[ID] == "B") {
        grade[ID] = "B+";
    } else if(grade[ID] == "B+") {
        grade[ID] = "A";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string id, g;
    while(cin >> id) {
        if(id == "q") {
            break;
        }
        cin >> g;
        order.push_back(id);
        grade[id] = g;
    }
    while(cin >> id) {
        upgrade(id);
    }
    for(auto it : order) {
        cout << it << " " << grade[it] << '\n';
    }

    return 0;
}