#include <bits/stdc++.h>

#define f first
#define s second
#define ll long long
#define pii pair<int, int>

using namespace std;

int ol_area(int a1[],int a2[]) {
    int w = min(a1[2],a2[2]) - max(a1[0],a2[0]);
    int h = min(a1[3],a2[3]) - max(a1[1],a2[1]);
    if(w < 0 || h < 0) return 0;
    return w*h;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    int arr[n][4];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    int mx_ov = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int v = ol_area(arr[i],arr[j]);
            if(mx_ov < v) mx_ov = v;
        }
    }
    if(mx_ov == 0) {
        cout << "No overlaps";
    } else {
        cout << "Max overlapping area = " << mx_ov << '\n';
        for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int v = ol_area(arr[i],arr[j]);
            if(mx_ov == v) {
                cout << "rectangles " << i <<  " and " << j << '\n';
            }
        }
    }
    }

    return 0;
}