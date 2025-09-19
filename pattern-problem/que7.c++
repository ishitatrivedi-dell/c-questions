// 7. Hollow Square (Stars)
// Input: n = 5

// *****
// *   *
// *   *
// *   *
// *****
// Description: Print a square frame of stars. Inside remains empty. Hint: Print * if row = 1 or n, or column = 1 or n; otherwise print space. Difficulty: Medium (first condition check pattern).
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n; c++) {
            if (r == 1 || r == n || c == 1 || c == n) cout << "*"; // Print star at borders
            else cout << " "; // Print space inside
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}