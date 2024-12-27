#include <iostream>
using namespace std;

bool isSortedBruteForce(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {  // Loop through the array
        if (arr[i] > arr[i + 1]) {         // Compare each element with the next one
            return false;                  // If an element is greater than the next, return false
        }
    }
    return true;  // If the loop completes without returning false, the array is sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result = isSortedBruteForce(arr, size);
    if (result) {
        cout << "True" << endl;  // The array is sorted
    } else {
        cout << "False" << endl; // The array is not sorted
    }

    return 0;
}