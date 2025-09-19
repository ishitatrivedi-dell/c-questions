// 14. Hollow Diamond (Numbers Palindrome)
// Input: n = 4

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
//   1 2 3 2 1
//     1 2 1
//       1
// Description: Diamond of palindromic numbers. Hint: Top = palindrome pyramid, bottom = inverted version. Difficulty: Challenge
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // Top half of the diamond
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << "  "; // Print leading spaces
        int num = 1; // Initialize number counter for each row
        for (int k = 1; k <= r; k++) { // Print increasing part
            cout << num << " ";
            num++;
        }
        num -= 2; // Adjust to print decreasing part
        for (int k = 1; k < r; k++) { // Print decreasing part
            cout << num << " ";
            num--;
        }
        cout << endl; // Move to the next line after each row
    }
    // Bottom half of the diamond
    for (int r = n - 1; r >= 1; r--) {
        for (int s = 0; s < n - r; s++) cout << "  "; // Print leading spaces
        int num = 1; // Initialize number counter for each row
        for (int k = 1; k <= r; k++) { // Print increasing part
            cout << num << " ";
            num++;
        }
        num -= 2; // Adjust to print decreasing part
        for (int k = 1; k < r; k++) { // Print decreasing part
            cout << num << " ";
            num--;
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}