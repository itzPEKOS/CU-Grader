#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str, tmp = "";
    getline(cin,str);
    vector<string> word;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            word.push_back(tmp);
            tmp = "";
        } else {
            tmp += str[i];
        }
    }
    word.push_back(tmp);
    int sz = word.size()-1;
    // cout << sz;
    bool vowel = false;
    string first = "", last = "", first_vo = "", last_vo = "";
    for(char it : word[0]) {
        if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u') {
            vowel = true;
        }
        if(vowel) {
            first_vo += it;
        } else {
            first += it;
        }
    }
    vowel = false;
    for(char it : word[sz]) {
        if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u') {
            vowel = true;
        }
        if(vowel) {
            last_vo += it;
        } else {
            last += it;
        }
    }
    word[0] = first + last_vo;
    word[sz] = last + first_vo;
    int chk = 1;
    for(string it : word) {
        if(chk == 1) cout << it, chk = 0;
        else cout << " " << it;
    }

    return 0;
}