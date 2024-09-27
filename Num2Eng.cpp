#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int,int>

using namespace std;

string s19[] = {"", " one", " two", " three", " four", " five", " six", " seven", " eight", " nine", 
                    " ten", " eleven", " twelve", " thirteen", " fourteen", " fifteen", " sixteen", " seventeen", " eighteen", " nineteen"};
string tens[] = {"", "", " twenty", " thirty", " forty", " fifty", " sixty", " seventy", " eighty", " ninety"};
string TMBT[] = {"", " thousand", " million", " billion", " trillion"};

string convert3(string M) {
    M = "00" + M;
    M = M.substr(M.length()-3);
    int d1 = (M[2]-'0'), d10 = (M[1]-'0'), d100 = (M[0]-'0');
    int d2 = d10*10 + d1;
    string x;
    if(d2 < 20) {
        x = s19[d2];
    } else {
        x = tens[d10] + s19[d1];
    }
    if(d100 != 0) {
        x = s19[d100] + " hundred" + x;
    }
    return x;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string N;
    cin >> N;
    N = string((3-N.length()%3)%3, '0') + N;
    string out;
    for(int i = N.length()-3, k = 0; i >= 0; i-=3, k++) {
        string x = convert3(N.substr(i,3));
        if(x != "") {
            out = x + TMBT[k] + out;
        }
    }
    if(out == "") out = " zero";
    cout << out.substr(1);

    return 0;
}