// // // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// float findaverage(int arr[] , int size){
 
//         int sum = 0;
//         for (int i = 0 ; i <=size ; i++){
//                             i < size 
//             // sum+=arr[0];
//                     arr[i];
//         }

        
//       return (float)sum/size ;
// }


// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]) ;
    
//     float average = findaverage(arr,size);
//     cout << "Average: " << average << endl;
//     return 0;
// }




 

// #include <iostream>
// using namespace std;

float findAverage(int arr[], int size) {
    int sum = 0;

    // Calculate the sum of all elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate and return the average
    return (float)sum / size; // Use (float) for decimal results
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array

    // Dynamically calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    float average = findAverage(arr, size); // Call the function
    cout << "Average: " << average << endl; // Print the result

    return 0;
}
