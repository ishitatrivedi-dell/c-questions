// 15. Concentric Square (Stars)
// Input: n = 5

// *****
// *   *
// * * *
// *   *
// *****
// Description: Square with inner star pattern. Hint: Use min distance from edge. Difficulty: Medium
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++) {
            int minDist = min(min(r - 1, c - 1), min(n - r, n - c)); // Calculate minimum distance from edges
            if (minDist % 2 == 0) cout << "*"; // Print star for even layers
            else cout << " "; // Print space for odd layers
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
