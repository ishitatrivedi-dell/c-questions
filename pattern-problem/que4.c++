// 4. Inverted Pyramid (Stars)
// Input: n = 5

// *********
//  *******
//   *****
//    ***
//     *
// Description: Upside-down version of full pyramid (Q13). Hint: Spaces increase, stars decrease using 2*(n-row)+1. Difficulty: Medium
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < r - 1; s++) cout << " "; // Print leading spaces
        for (int k = 1; k <= 2 * (n - r) + 1; k++) cout << "*"; // Print stars in decreasing order
        cout << endl; // Move to the next line after each row
    }
    return 0;
}