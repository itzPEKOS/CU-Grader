#include <iostream>
using namespace std;
int main() {
    int h1,m1,s1, h2,m2,s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    // int t1 = h1*60*60 + m1*60 + s1;
    // int t2 = h2*60*60 + m2*60 + s2;
    int dh,dm,ds;
    ds = (h2-h1+24)%24*60*60 + (m2-m1+(60 + 23*60))%(60 + 23*60)*60 + (s2-s1+(60 + 59*60 + 23*60*60))%(60 + 59*60 + 23*60*60);
    dh = ds / (60*60);
    ds -= dh * 60*60;
    dm = ds / 60;
    ds -= dm*60;
    cout << dh%24 << ':' << dm << ':' << ds;
}