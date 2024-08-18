#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int n;
string deck[101], a[101], b[101];

void ab_set() {
    for(int i = 0; i < n; i++) {
        if(i < n/2) a[i] = deck[i];
        else b[i-n/2] = deck[i];
    }
}

void cut() {
    for(int i = 0; i < n; i++) {
        if(i < n/2) deck[i] = b[i];
        else deck[i] = a[i-n/2];
    }
    ab_set();
}

void shuffle() {
    int j = 0, k = 0;
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            deck[i] = a[j++];
        } else {
            deck[i] = b[k++];
        }
    }
    ab_set();
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> deck[i];
        if(i < n/2) a[i] = deck[i];
        else b[i-n/2] = deck[i];
    }
    // for(int i = 0; i < n/2; i++) {
    //     cout << a[i] << " " << b[i] << '\n';
    // }
    cin.ignore();
    string act;
    // getline(cin,act);
    getline(cin,act);
    for(int i = 0; act[i] != '\0'; i++) {
        if(act[i] == 'C') cut();
        else if(act[i] == 'S') shuffle();
    }
    for(int i = 0; i < n; i++) {
        cout << deck[i] << " ";
    }

    return 0;
}