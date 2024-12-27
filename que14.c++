#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4}; // Original array
    int size = 4;             // Size of the original array
    int newElement = 0;       // Element to add at the beginning

    // Create a new array with one extra space
    int newSize = size + 1;
    int newNums[newSize];

    // Insert the new element at the beginning
    newNums[0] = newElement;

    // Copy the existing elements to the new array
    for (int i = 0; i < size; i++) {
        newNums[i + 1] = nums[i];
    }

    // Print the updated array
    cout << "Updated Array: [";
    for (int i = 0; i < newSize; i++) {
        cout << newNums[i];
        if (i < newSize - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
