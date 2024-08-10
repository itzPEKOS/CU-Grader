#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

struct {
    int d;
    int m;
    int y;
} red, blue;

int date[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int cnt_date1(int m) {
    int cnt = 0;
    for(int i = m+1; i < 13; i++) {
        cnt += date[i];
    }
    return cnt;
}

int cnt_date2(int m) {
    int cnt = 0;
    for(int i = m-1; i > 0; i--) {
        cnt += date[i];
    }
    return cnt;
}

bool leap_yr(int year) {
    year -= 543;
    if(year%400 == 0) {
        return true;
    } else if(year%100 == 0) {
        return false;
    } else if(year%4 == 0) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> red.d >> red.m >> red.y;
    cin >> blue.d >> blue.m >> blue.y;
    int black = 365*(blue.y-red.y-1);
    int t_red = date[red.m]-red.d+1+cnt_date1(red.m);
    int t_blue = cnt_date2(blue.m)+blue.d-1;
    if((red.m < 2 || (red.m == 2 && red.d < 29)) && leap_yr(red.y)) t_red += 1;
    if(blue.m > 2 && leap_yr(blue.y)) t_blue += 1;
    int t = black+t_red+t_blue;
    cout << t << " ";
    cout << round((sin((2*M_PI*t)/23.0))*100.0)/100.0 << " ";
    cout << round((sin((2*M_PI*t)/28.0))*100.0)/100.0 << " ";
    cout << round((sin((2*M_PI*t)/33.0))*100.0)/100.0;

    return 0;
}