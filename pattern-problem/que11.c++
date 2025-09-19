// 11. Reverse Continuous Triangle (Numbers)
// Input: n = 5

// 15
// 14 13
// 12 11 10
// 9  8  7  6
// 5  4  3  2  1
// Description: Numbers decrease row by row. Hint: Start counter at n*(n+1)/2 and decrement each time. Difficulty: Medium
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = n * (n + 1) / 2; // Initialize counter to n*(n+1)/2
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << "  "; // Print leading spaces
        for (int k = 1; k <= r; k++) { // Print numbers in the row
            cout << count << " ";
            count--; // Decrement counter after each print
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}
