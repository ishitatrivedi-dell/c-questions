#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int &size) {
    // Variable to track the position of the next unique element
    int newIndex = 0;

    // Traverse the array
    for (int i = 0; i < size; i++) {
        // Check if the current element is already present in the new part of the array
        int j;
        for (j = 0; j < newIndex; j++) {
            if (arr[i] == arr[j]) {
                break; // Element is a duplicate, break the inner loop
            }
        }

        // If the element is not a duplicate, add it to the unique part of the array
        if (j == newIndex) {
            arr[newIndex] = arr[i];
            newIndex++;
        }
    }

    // Update the size of the array to reflect the number of unique elements
    size = newIndex;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5}; // Input array
    int size = 7; // Original size of the array

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Remove duplicates
    removeDuplicates(arr, size);

    // Print the updated array
    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// my code 

    // #include <iostream>
// using namespace std;

void removeDuplicates(int arr[], int &size) {
    // Variable to track the position of the next unique element
    int newIndex = 0;

    // Traverse the array
    for (int i = 0; i < size; i++) {
        // Check if the current element is already present in the new part of the array
        int j;
        for (j = 0; j < newIndex; j++) {
            if (arr[i] == arr[j]) {
                break; // Element is a duplicate, break the inner loop
            }
        }

        // If the element is not a duplicate, add it to the unique part of the array
        if (j == newIndex) {
            arr[newIndex] = arr[i];
            newIndex++;
        }
    }

    // Update the size of the array to reflect the number of unique elements
    size = newIndex;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5}; // Input array
    int size = 7; // Original size of the array

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Remove duplicates
    removeDuplicates(arr, size);

    // Print the updated array
    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

