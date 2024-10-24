#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

map<char,char> bracket = {{'(','['},{')',']'},{'[','('},{']',')'}};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    getline(cin,str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '(' || str[i] == '[' || str[i] == ')' || str[i] == ']') {
            str[i] = bracket[str[i]];
        }
    }
    cout << str;

    return 0;
}