#include <iostream>
using namespace std;

// Function to print elements at even indexes
void printEvenIndexes(int arr[], int size) {
    cout << "Elements at even indexes: [";
    // Loop through the array and print elements at even indexes
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {  // Check if the index is even
            cout << arr[i];
            if (i < size - 2) {  // Avoid trailing comma
                cout << ", ";
            }
        }
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Input array
    int size = 5;                     // Size of the array

    // Call the function to print elements at even indexes
    printEvenIndexes(arr, size);

    return 0;
}
