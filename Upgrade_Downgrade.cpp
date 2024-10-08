#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,string> grade;
map<string,int> order = {{"A",1},
                        {"B+",2},
                        {"B",3},
                        {"C+",4},
                        {"C",5},
                        {"D+",6},
                        {"D",7},
                        {"F",8}};
vector<string> odr;
vector<pair<string,int>> v;

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

void downgrade(string ID) {
    if(grade[ID] == "D") {
        grade[ID] = "F";
    } else if(grade[ID] == "D+") {
        grade[ID] = "D";
    } else if(grade[ID] == "C") {
        grade[ID] = "D+";
    } else if(grade[ID] == "C+") {
        grade[ID] = "C";
    } else if(grade[ID] == "B") {
        grade[ID] = "C+";
    } else if(grade[ID] == "B+") {
        grade[ID] = "B";
    } else if(grade[ID] == "A") {
        grade[ID] = "B+";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    string id, g;
    for(int i = 0; i < n; i++) {
        cin >> id >> g;
        odr.push_back(id);
        grade[id] = g;
    }
    while(cin >> id) {
        char uo = id[id.length()-1];
        if(uo == '+') upgrade(id.substr(0,id.length()-1));
        else if(uo == '-') downgrade(id.substr(0,id.length()-1));
    }
    for(auto it : odr) {
        v.push_back({it,order[grade[it]]});
    }
    sort(v.begin(),v.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    for(auto it : v) {
        cout << it.f << " " << grade[it.f] << '\n';
    }

    return 0;
}