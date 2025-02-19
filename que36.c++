#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;  // Input number of rows

    // Outer loop for each row
    for (int i = 0; i < n; i++) {
        // Loop to print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";  // Print space
        }

        // Loop to print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";  // Print star
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

// method using function 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;  // Input number of rows

    // Outer loop for each row
    for (int i = 0; i < n; i++) {
        // Loop to print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";  // Print space
        }

        // Loop to print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";  // Print star
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}


