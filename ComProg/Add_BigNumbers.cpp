#include <bits/stdc++.h>

using namespace std;

string add(string a, string b) {
    string str = "";
    int t = 0;
    int mx = max(a.length(),b.length());
    a = string(mx-a.length(), '0') + a;
    b = string(mx-b.length(), '0') + b;
    for(int i = mx-1; i >= 0; i--) {
        int num = (a[i]-'0') + (b[i]-'0') + t;
        char c = (num%10) + '0';
        str = c + str;
        t = num/10;
    }
    if(t > 0) str = (char)(t+'0') + str;
    return str;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string num, sum = "0";
    while(cin >> num) {
        if(num == "END") break;
        sum = add(sum,num);
    }
    cout << sum;

    return 0;
}