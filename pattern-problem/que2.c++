// 2. Continuous Number Triangle
// Input: n = 5

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// Description: Numbers don’t reset in each row; they keep increasing continuously. Hint: Use a counter variable that increments after each print. Difficulty: Medium

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 1; // Initialize counter variable
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << "  "; // Print leading spaces
        for (int k = 1; k <= r; k++) { // Print numbers in the row
            cout << count << " ";
            count++; // Increment counter after each print
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}