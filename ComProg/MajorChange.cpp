#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

struct {
    string id;
    float gpax;
    char cp;
    char cal1;
    char cal2;
    bool chk = true;
} student1, student2;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> student1.id >> student1.gpax >> student1.cp >> student1.cal1 >> student1.cal2;
    cin >> student2.id >> student2.gpax >> student2.cp >> student2.cal1 >> student2.cal2;
    if(student1.cp - 'A' > 0 || student1.cal1 - 'A' > 2 || student1.cal2 - 'A' > 2) student1.chk = false;
    if(student2.cp - 'A' > 0 || student2.cal1 - 'A' > 2 || student2.cal2 - 'A' > 2) student2.chk = false;
    if(student1.chk == false && student2.chk == false) {
        cout << "None";
        return 0;
    }

    if(student1.chk == false) {
        cout << student2.id;
        return 0;
    }
    if(student2.chk == false) {
        cout << student1.id;
        return 0;
    }
    string ans;

    if(student1.gpax > student2.gpax) {
        ans = student1.id;
    } else if(student1.gpax < student2.gpax) {
        ans = student2.id;
    } else if(student1.cp - 'A' < student2.cp - 'A') {
        ans = student1.id;
    } else if(student1.cp - 'A' > student2.cp - 'A') {
        ans = student2.id;
    } else if(student1.cal1 - 'A' < student2.cal1 - 'A') {
        ans = student1.id;
    } else if(student1.cal1 - 'A' > student2.cal1 - 'A') {
        ans = student2.id;
    } else if(student1.cal2 - 'A' < student2.cal2 - 'A') {
        ans = student1.id;
    } else if(student1.cal2 - 'A' > student2.cal2 - 'A') {
        ans = student2.id;
    } else {
        ans = "Both";
    }
    cout << ans;

    return 0;
}