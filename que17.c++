#include <iostream>
using namespace std;

// Function to count positive and negative numbers
void countPositiveNegative(int arr[], int size, int &positiveCount, int &negativeCount) {
    // Loop through the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++; // Increment positive counter
        } else if (arr[i] < 0) {
            negativeCount++; // Increment negative counter
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6}; // Input array
    int size = 6;                     // Size of the array

    int positiveCount = 0; // Initialize counter for positive numbers
    int negativeCount = 0; // Initialize counter for negative numbers

    // Call the function to count positives and negatives
    countPositiveNegative(arr, size, positiveCount, negativeCount);

    // Print the results
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;

    return 0;
}
