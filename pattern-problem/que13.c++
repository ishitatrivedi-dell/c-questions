// 13. Hollow Diamond (Stars)
// Input: n = 5

//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
// Description: Diamond outline only. Hint: Use hollow pyramid + inverted hollow pyramid. Difficulty: Medium

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // Top half of the diamond
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << " "; // Print leading spaces
        for (int c = 1; c <= 2 * r - 1; c++) {
            if (c == 1 || c == 2 * r - 1) cout << "*"; // Print star at edges
            else cout << " "; // Print space inside
        }
        cout << endl; // Move to the next line after each row
    }
    // Bottom half of the diamond
    for (int r = n - 1; r >= 1; r--) {
        for (int s = 0; s < n - r; s++) cout << " "; // Print leading spaces
        for (int c = 1; c <= 2 * r - 1; c++) {
            if (c == 1 || c == 2 * r - 1) cout << "*"; // Print star at edges
            else cout << " "; // Print space inside
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}