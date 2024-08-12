#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string word, sentence;
    int cnt = 0;
    getline(cin,word);
    getline(cin,sentence);
    for(int i = 0; sentence[i] != '\0'; i++) {
        if(sentence[i] == '"' || sentence[i] == '(' || sentence[i] == ')' || sentence[i] == ',' || sentence[i] == '.' || sentence[i] == '\'') {
            sentence[i] = ' ';
        }
    }
    for(int i = 0; sentence[i] != '\0'; i++) {
        string str = "";
        while(sentence[i] != ' ' && sentence[i] != '\0') {
            str += sentence[i];
            i++;
        }
        // cout << str << '\n';
        if(str == word) cnt++;
    }

    cout << cnt;

    return 0;
}