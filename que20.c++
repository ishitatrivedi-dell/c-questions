#include <iostream>
using namespace std;

int findDifference(int arr[], int size){
    int maxElement = arr[0];
    int minElement = arr[0];
    
    for(int i = 1 ; i < size; i++){
        if (arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    for (int i = 1 ; i < size; i++ ){
        if(arr[i] < minElement){
            minElement = arr[i];
        }
        }
        return maxElement-minElement;
}

int main(){
    int arr[] = {80,30,70,50,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    
       cout << "Difference (Brute Force): " <<  findDifference(arr, size) << endl;
}


// method 2 


#include <iostream>
using namespace std;

int findDifferenceSingleLoop(int arr[], int size) {
    // Initialize maxElement and minElement to the first element of the array
    int maxElement = arr[0];
    int minElement = arr[0];

    // Traverse the array once
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) { // Update maxElement if the current element is greater
            maxElement = arr[i];
        }
        if (arr[i] < minElement) { // Update minElement if the current element is smaller
            minElement = arr[i];
        }
    }

    // Return the difference between the maximum and minimum elements
    return maxElement - minElement;
}

int main() {
    // Input array
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Output the result
    cout << "Difference (Single Loop): " << findDifferenceSingleLoop(arr, size) << endl;
    return 0;
}