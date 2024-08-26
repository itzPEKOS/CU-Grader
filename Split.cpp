#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

vector<string> split(string line, char delimiter) {
    vector<string> ans;
    line += delimiter;
    string str = "";
    for(int i = 0; line[i] != '\0'; i++) {
        if(line[i] == delimiter) {
            if(str.length() > 0) {
                ans.push_back(str);
                str = "";
            }
        } else {
            str += line[i];
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
    cout << '(' << e << ')';
    }

    return 0;
}