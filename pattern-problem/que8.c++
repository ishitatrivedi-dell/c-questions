// 8. Centered Hollow Triangle (Stars)
// Input: n = 5

//     *
//    * *
//   *   *
//  *     *
// *********
// Description: Full pyramid outline (edges only). Hint: Stars at first and last column of each row; last row all stars. Difficulty: Medium
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << " "; // Print leading spaces
        for (int c = 1; c <= 2 * r - 1; c++) {
            if (c == 1 || c == 2 * r - 1 || r == n) cout << "*"; // Print star at edges and last row
            else cout << " "; // Print space inside
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}