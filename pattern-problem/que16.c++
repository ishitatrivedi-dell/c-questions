// 16. X Pattern (Numbers)
// Input: n = 5

// 1   5
//  2 4
//   3
//  2 4
// 1   5
// Description: Diagonals filled with numbers. Hint: Left diagonal = row index, right diagonal = n-row+1. Difficulty: Medium
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++) {
            if (c == r) cout << r; // Print left diagonal
            else if (c == n - r + 1) cout << n - r + 1; // Print right diagonal
            else cout << " "; // Print space elsewhere
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}