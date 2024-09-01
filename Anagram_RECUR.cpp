#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

void genAnagram(string str,int start,int end,set<string>& anagram) {
    if(start == end) {
        anagram.insert(str);
        // cout << start << " " << end << " " << str << '\n';
    } else {
        for(int i = start; i <= end; i++) {
            swap(str[start],str[i]);
            genAnagram(str,start+1,end,anagram);
            swap(str[start],str[i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    cin >> str;
    set<string> anagram;
    genAnagram(str,0,str.length()-1,anagram);
    int f = 1;
    for(string it : anagram) {
        if(f == 1) cout << it, f = 0;
        else cout << " " << it;
    }

    return 0;
}