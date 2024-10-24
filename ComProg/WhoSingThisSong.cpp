#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<string,vector<string>> lst;

void print_ans(string song) {
    cout << song << " -> ";
    if(lst.find(song) == lst.end()) {
        cout << "Not found";
    } else {
        int f = 1;
        for(string it : lst[song]) {
            if(f) {
                cout << it;
                f = 0;
            } else {
                cout << ", " << it;
            }
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    string line;
    for(int i = 0; i < n; i++) {
        getline(cin,line);
        string song = line.substr(0,line.find(','));
        string singer = line.substr(line.find(',')+2);
        lst[song].push_back(singer);
    }
    getline(cin,line);
    int f = 1;
    string tmp = "";
    for(int i = 0; line[i] != '\0'; i++) {
        if(line[i] == ',') {
            print_ans(tmp);
            tmp = "";
            f = 0;
        } else if(!f) {
            f = 1;
        } else {
            tmp += line[i];
        }
    }
    print_ans(tmp);

    return 0;
}