#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Original array
    int size = 5; // Size of the original array
    int newElement = 6; // Element to add to the array

    // Create a new array with one extra space
    int newSize = size + 1;
    int newArr[newSize];

    // Copy elements from the original array to the new array
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Add the new element to the end
    newArr[size] = newElement;

    // Print the updated array
    cout << "Updated Array: [";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i];
        if (i < newSize - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
