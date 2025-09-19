// 3. Continuous Alphabet Triangle
// Input: n = 6

// A
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U
// Description: Like numbers but with alphabets. Hint: Maintain a character counter; wrap after ‘Z’ if needed. Difficulty: Medium

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char ch = 'A'; // Initialize character counter
    for (int r = 1; r <= n; r++) {
        for (int s = 0; s < n - r; s++) cout << " "; // Print leading spaces
        for (int k = 1; k <= r; k++) { // Print characters in the row
            cout << ch << " ";
            ch++; // Move to the next character
            if (ch > 'Z') ch = 'A'; // Wrap around after 'Z'
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}