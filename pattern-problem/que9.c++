// 9. Simple X (Stars)
// Input: n = 5

// *   *
//  * *
//   *
//  * *
// *   *
// Description: X shape with stars along diagonals. Hint: Print star if row = col OR row + col = n + 1. Difficulty: Medium


#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++) {
            if (r == c || r + c == n + 1) cout << "*"; // Print star on diagonals
            else cout << " "; // Print space elsewhere
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}