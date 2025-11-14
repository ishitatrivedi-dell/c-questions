//  Online C++ compiler to run C++ program online

#include <iostream> 
#include <algorithm> 
#include <vector>   
using namespace std ;

// int main() {

//     int arr[] = {10, 5, 20, 15, 8, 25};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int largest = arr[0];

    
//     for (int i = 1; i < n; ++i) {
//          if (arr[i] > largest) {
//             largest = arr[i];
//         }
//         else if(largest > arr[i]){
//             arr[i] = largest ;
//         }
//     }
//     std::cout << "Largest number: " << largest << std::endl;
//     return 0;
//     std::cout << "second largest :" << arr[i] << std::endl ;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int n) {
//     int start = 0;
//     int end = n - 1;

//     while (start < end) {
     
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     reverseArray(arr, n);

//     cout << "\nReversed array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int findSecondLargest(vector<int> arr) {
//     if (arr.size() < 2) {
//         return -1; 
//     }

//     int largest = arr[0];
//     int secondLargest = -1;

//     for (int num : arr) {
//         if (num > largest) {
//             largest = num;
//         }
//     }

//     for (int num : arr) {
//         if (num != largest) {
//             if (secondLargest == -1 || num > secondLargest) {
//                 secondLargest = num;
//             }
//         }
//     }

//     return secondLargest;
// }

// int main() {
//     vector<int> numbers = {12, 35, 1, 10, 34, 1};

//     int secondLargest = findSecondLargest(numbers);

//     if (secondLargest == -1) {
//         cout << "Cannot find the second largest element!" << endl;
//     } else {
//         cout << "The second largest element is: " << secondLargest << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     if (n < 2) {
//         cout << "Need at least 2 numbers!" << endl;
//         return 0;
//     }

//     int arr[100];
//     cout << "Enter " << n << " numbers: ";

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int secondLargest = -1; 
    
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (arr[i] != largest) {
//             if (secondLargest == -1 || arr[i] > secondLargest) {
//                 secondLargest = arr[i];
//             }
//         }
//     }

//     if (secondLargest == -1) {
//         cout << "There is no second largest element (all numbers are same)." << endl;
//     } else {
//         cout << "The second largest element is: " << secondLargest << endl;
//     }

//     return 0;
// }

// void MoveZeros(vector<int>& nums) {
//     int left = 0;
//     for (int right = 0; right < nums.size(); right++) {
//         if (nums[right] != 0) {
//             swap(nums[left], nums[right]);
//             left++;
//         }
//     }
// }

// int main() {
//     vector<int> nums = {0, 1, 0, 3, 12};

//     MoveZeros(nums);
  
//     cout << "Array after moving zeros: ";
//     for (int num : nums) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 6};  
//     int n = 6;  

//     int totalSum = n * (n + 1) / 2; 
//     int arraySum = 0;

//     for (int i = 0; i < n - 1; i++) {
//         arraySum += arr[i];
//     }

//     int missing = totalSum - arraySum;

//     cout << "The missing number is: " << missing << endl;

//     return 0;
// }

// int main() {
//     string str = "hello";

//     int left = 0;                
//     int right = str.length() - 1; 

//     while (left < right) {
       
//         char temp = str[left];
//         str[left] = str[right];
//         str[right] = temp;

//         left++;
//         right--;
//     }

//     cout << "Reversed string: " << str << endl;

//     return 0;
// }

//   int main(){
//       string str = "racecar";
    
//     int left = 0 ;
//     int right = str.length()-1;
//     bool isPalindrome = true ;
    
//     while (left < right){
//         if(str[left] != str[right]){
//              isPalindrome = false;
//             break;
//         }
//         left++;
//         right--;
//     }
    
//     if (isPalindrome)
//         cout << "The string is a palindrome." << endl;
//     else
//         cout << "The string is not a palindrome." << endl;

//     return 0;
//   }


//   // frequency of characters in a string 
//   int main(){
//     string str = "aaabbc";
//     int freq[256] = {0};
//     for (char c : str){
//         freq[c]++;
//     }
//     for (int i = 0; i < 256; i++){
//         if (freq[i] > 0){
//             cout << char(i) << ": " << freq[i] << endl;
//         }
//     }
//   }

  // frequecny of characters using map
//   #include <map>
//     int main(){
//         string str = "aaabbc";
//         map<char, int> freq;
//         for (char c : str){
//             freq[c]++;
//         }
//         for (auto pair : freq){
//             cout << pair.first << ": " << pair.second << endl;
//         }
//     }
    
    // move negative numbers to the end
    //  int arr[] = {-1,2,-3,-6,5,4,7};

    // int main(){
    //     int arr[] = {-1,2,-3,-6,5,4,7};
    //     int n = sizeof(arr)/sizeof(arr[0]);
    //     int left = 0;
    //     int right = n - 1;

    //     while (left < right){
    //         while (left < right && arr[left] >= 0){
    //             left++;
    //         }
    //         while (left < right && arr[right] < 0){
    //             right--;
    //         }
    //         if (left < right){
    //             swap(arr[left], arr[right]);
    //             left++;
    //             right--;
    //         }
    //     }

    //     cout << "Array after moving negative numbers to the end: ";
    //     for (int i = 0; i < n; i++){
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;

    //     return 0;
    // }

// move negative numbers to the end without changing the order
// int main() {
//     int arr[] = {-1, 2, -3, -6, 5, 4, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> result;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] >= 0) {
//             result.push_back(arr[i]);
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0) {
//             result.push_back(arr[i]);

//         }
//     }
//     cout << "Array after moving negative numbers to the end: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }


// sort 0's 1's and 2's

// int main(){
//     int arr[] = {0, 1, 2, 0, 1, 2, 1, 0};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int low = 0 , mid = 0 , high = n - 1 ;

//     while (mid <= high){
//         if (arr[mid] == 0){
//             swap(arr[low], arr [mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1){
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }

//     cout << "Array after sorting 0's, 1's and 2's: ";
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// maximum subarray sum 

// int arr[] = {2,3,-8,7,-1,2,3};
// #include <climits>
//  int main(){
//     int arr[] = {2, 3, -8, 7, -1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int maxSoFar = arr[0];
//     int maxEndingHere = arr[0];

//     for (int i = 1; i < n; i++) {
//         maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
//         maxSoFar = max(maxSoFar, maxEndingHere);
//     }

//     cout << "Maximum subarray sum is: " << maxSoFar << endl;

//     return 0;
//  }

// find non-repeating element 
// int arr[] = {-1,2,-1,3,2};
//  int main(){
//     int arr[] = {-1, 2, -1, 3, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = 0;

//     for (int i = 0; i < n; i++) {
//         result ^= arr[i];
//     }

//     cout << "The non-repeating element is: " << result << endl;

//     return 0;
//  }

 // give it using map 
//  #include <map>
//  int main(){
//     int arr[] = {-1, 2, -1, 3, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     map<int, int> freq;
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }
//     for (auto pair : freq) {
//         if (pair.second == 1) {
//             cout << "The non-repeating element is: " << pair.first << endl;
//             break;

//         }
//     }
//     return 0;
//  }


// product of array except the self element
// int array = {1,2,3,4}

/*

phele product ,suffix order and prefix and suffix order 
 the prefix is 1 1 2 6 
 the suffix is 24 12 4 1 
 and the product of prefix and suffix
 
*/

int main(){
vector<int> nums = {1,2,3,4};
int n = nums.size();

    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> result(n, 1);

for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];

    }

for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }


for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }

cout << "Product Except Self: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
  