// 6. Diamond Pattern (Alphabets Palindrome)
// Input: n = 5

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
//  ABCDCBA
//   ABCBA
//    ABA
//     A
// Description: Combines palindrome pyramid (Q25) and its inverted version. Hint: Top half = palindrome pyramid, bottom half = inverted palindrome. Difficulty: Challenge

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // Top half of the diamond
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << " "; // Print leading spaces
        char ch = 'A'; // Initialize character counter for each row
        for (int k = 1; k <= r; k++) { // Print increasing part
            cout << ch;
            ch++;
        }
        ch -= 2; // Adjust to print decreasing part
        for (int k = 1; k < r; k++) { // Print decreasing part
            cout << ch;
            ch--;
        }
        cout << endl; // Move to the next line after each row
    }
    // Bottom half of the diamond
    for (int r = n - 1; r >= 1; r--) {
        for (int s = 0; s < n - r; s++) cout << " "; // Print leading spaces
        char ch = 'A'; // Initialize character counter for each row
        for (int k = 1; k <= r; k++) { // Print increasing part
            cout << ch;
            ch++;
        }
        ch -= 2; // Adjust to print decreasing part
        for (int k = 1; k < r; k++) { // Print decreasing part
            cout << ch;
            ch--;
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}