#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int arr[6][4];

void bin(int n,int i) {
    int j = 0;
    while(n > 0) {
        arr[i][j] = n%2;
        n /= 2;
        j++;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string time;
    cin >> time;
    bin(time[0]-'0',0);
    bin(time[1]-'0',1);
    bin(time[3]-'0',2);
    bin(time[4]-'0',3);
    bin(time[6]-'0',4);
    bin(time[7]-'0',5);
    
    for(int i = 3; i >= 0; i--) {
        for(int j = 0; j < 6; j++) {
            if((j == 0 && i < 2) || ((j == 2 || j == 4) && i < 3) || 
            (j == 1 || j == 3 || j == 5)) {
                cout << arr[j][i];
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}