#include <bits/stdc++.h>
using namespace std;

bool isPermutation(int arr[], int start, int end) {
    int length = end - start + 1;
    bool seen[201] = { false };
    for (int i = start; i <= end; i++) {
        if (arr[i] < 1 || arr[i] > length) return false;
        if (seen[arr[i]]) return false;
        seen[arr[i]] = true;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[200];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            if (isPermutation(arr, start, end)) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}