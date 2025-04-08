#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // jis element ko insert karna hai
        int j = i - 1;

        // Shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // right shift
            j--;
        }

        arr[j + 1] = key; // correct position pe insert
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
