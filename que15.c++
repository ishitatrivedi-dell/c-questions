#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, 5}; // Original array
    int size = 5;                // Size of the original array

    // Reduce the size of the array to simulate removing the last element
    size = size - 1;

    // Print the updated array
    cout << "Updated Array: [";
    for (int i = 0; i < size; i++) {
        cout << nums[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

