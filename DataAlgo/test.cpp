#include <bits/stdc++.h>
using namespace std;

int r, c;
int board[1001][1001];
bool visited[1001][1001];
vector<string> paths;  // Store all paths to sort them

void findPaths(int i, int j, string move) {
    // Check if current position is out of bounds or is an obstacle or already visited
    if (i < 0 || i >= r || j < 0 || j >= c || board[i][j] == 1 || visited[i][j]) {
        return;
    }
    
    // Mark current cell as visited
    visited[i][j] = true;
    
    // If we reached the destination
    if (i == r-1 && j == c-1) {
        paths.push_back(move);  // Store the path
        visited[i][j] = false;  // Backtrack
        return;
    }
    
    // Try moving right first (A)
    findPaths(i, j+1, move + 'A');
    
    // Try moving down (B)
    findPaths(i+1, j, move + 'B');
    
    // Try moving up (C)
    findPaths(i-1, j, move + 'C');
    
    // Backtrack
    visited[i][j] = false;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    // Read input
    cin >> r >> c;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> board[i][j];
            visited[i][j] = false;
        }
    }
    
    // Find all possible paths
    findPaths(0, 0, "");
    
    // Sort paths to ensure correct order
    sort(paths.begin(), paths.end());
    
    // Print paths
    for(const string& path : paths) {
        cout << path << " ";
    }
    cout << "DONE";

    return 0;
}