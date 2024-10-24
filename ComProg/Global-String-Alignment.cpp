#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

string print_str(string str1,string str2,int mx) {
    int la = str1.length(), lb = str2.length();
    for(int i = 0; i < la; i++) {
        int cnt = 0;
        for(int j = 0; j < min(la,lb)+i; j++) {
            if(str1[j] == str2[j]) {
                cnt++;
            }
        }
        if(cnt == mx) break;
        str2 = "-" + str2;
    }
    return str2;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string a, b, ca, cb;
    cin >> a >> b;
    ca = a, cb = b;
    int la = a.length(), lb = b.length(), mxa = 0, mxb = 0;
    for(int i = 0; i < lb; i++) {
        int cnt = 0;
        for(int j = 0; j < min(la,lb)+i; j++) {
            if(ca[j] == cb[j]) {
                cnt++;
            }
        }
        mxa = max(mxa,cnt);
        ca = "-" + ca;
    }
    ca = a;

    for(int i = 0; i < la; i++) {
        int cnt = 0;
        for(int j = 0; j < min(la,lb)+i; j++) {
            if(ca[j] == cb[j]) {
                cnt++;
            }
        }
        mxb = max(mxb,cnt);
        cb = "-" + cb;
    }
    cb = b;

    if(mxa < mxb) {
        b = print_str(ca,cb,mxb);
    } else {
        a = print_str(cb,ca,mxa);
    }

    cout << a << '\n' << b << '\n' << max(mxa,mxb);

    return 0;
}