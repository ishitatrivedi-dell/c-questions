#include <iostream>
using namespace std;

bool allPositive(int arr[], int size) {
    // Check each element in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) { // If any element is non-positive
            return false;
        }
    }
    return true; // All elements are positive
}

int main() {
    int arr[] = {3, 5, 9, 1, 7}; // Input array
    int size = 5;                // Size of the array

    // Check if all elements are positive
    bool result = allPositive(arr, size);

    // Print the result
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
