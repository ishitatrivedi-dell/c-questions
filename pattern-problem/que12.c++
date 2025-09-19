// 12. Pyramid with Continuous Numbers
// Input: n = 4

//          1
//       2  3  4
//    5  6  7  8  9
// 10 11 12 13 14 15 16
// Description: Numbers keep increasing across pyramid rows. Hint: Counter variable continues row by row. Difficulty: Challenge

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << "  "; // Print leading spaces
        for (int k = 1; k < 2 * r; k++) cout << k + (r * (r - 1)) / 2 << " "; // Print continuous numbers
        cout << endl; // Move to the next line after each row
    }
    return 0;
}