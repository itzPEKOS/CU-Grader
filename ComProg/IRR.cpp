#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int M;
    cin>>M;
    double c[M+1];
    for(int i = 0; i < M+1; i++) {
        double temp;
        cin >> temp;
        c[i] = temp;
    }
    double l = -1, u = 1;
    double value = 0;
    double irr;
    do {
        irr = (l+u)/2;
        value = 0.0;
        for(int i = 0; i < M+1; i++){
            value += c[i]/(pow(irr+1,i));
        }
        if(value > 0) l=irr;
        else if(value < 0) u = irr;
    } while(abs(value) > 1e-8);

    cout<<setprecision(8)<<irr<<endl;

    return 0;
}