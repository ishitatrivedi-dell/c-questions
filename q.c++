#include <iostream>
#include <map>
#include <algorithm>
#include <unordered_set>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// bool containsDuplicate(vector<int>& nums) {
//     unordered_set<int> duplicate;
//     for (int num : nums) {
//         if (duplicate.count(num)) 
//             return true;
//         duplicate.insert(num);
//     }
//     return false;
// }
// m-2 

// bool containsDuplicate(vector<int>& nums) {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());  
//     for (int i = 0; i < n - 1; i++) {
//         if (nums[i] == nums[i + 1])
//             return true;
//     }

//     return false;
// }

// m-3 
    // map<int, int> freq;  

    // for(int num : nums) {
    //     freq[num]++;          
    //     if (freq[num] > 1)     
    //         return true;      
    // }

    // return false;  


// int calculateDifference(string s) {
//     int count = 0;

//     for (int i = 0; i < s.size() - 1; i++) {
//         if (s[i + 1] >= s[i]) {
//             count += (s[i + 1] - s[i]);
//         } else {
//             count += (s[i] - s[i + 1]);
//         }
//     }

//     return count;
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     int result = calculateDifference(s);
//     cout << "Total difference count: " << result << endl;

//     return 0;
// }

// int main() {
    // vector<int> nums = {1, 2, 3, 4, 2}; 

    // if (containsDuplicate(nums)) {
    //     cout << "Contains duplicate elements." << endl;
    // } else {
    //     cout << "No duplicates found." << endl;
    // }

    // return 0;
// }


// int main() {
  
    
//     int num , sum = 0 , temp , digit ;
//     cout << "enter a number : ";
//     cin >> num ; 
    
    
//     temp = num ;
    
//     while(temp > 0 ){
//         digit = temp %10 ;
//         sum += pow(digit, 0);
//         temp /=10;
//         if(sum == num) 
//         cout << num << "is amstrong number" ;
//         else 
//         cout << num << "is not amstrong number";
        
//         return 0 ; 
//     }
    
// }

// int main() {
//     int num, reversed = 0, digit, temp;
    
//     cout << "Enter a number: ";
//     cin >> num;

//     temp = num;  

//     while (temp > 0) {
//         digit = temp % 10;              
//         reversed = reversed * 10 + digit; 
//         temp /= 10;                   
//     }

//     if (num == reversed)
//         cout << num << " is a Palindrome number.";
//     else
//         cout << num << " is NOT a Palindrome number.";

//     return 0;
// }



// int main() {
//     int num, sum = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (int i = 1; i < num; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }

//     if (sum == num)
//         cout << num << " is a Perfect number.";
//     else
//         cout << num << " is NOT a Perfect number.";

//     return 0;
// }

// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }


// int main() {
//     int num, temp, digit, sum = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     temp = num;

//     while (temp > 0) {
//         digit = temp % 10;          
//         sum += factorial(digit);    
//         temp /= 10;             
//     }

//     if (sum == num)
//         cout << num << " is a Strong number.";
//     else
//         cout << num << " is NOT a Strong number.";

//     return 0;
// }

// int main() {
//     int num, sum = 0, product = 1, digit;
    
//     cout << "Enter a number: ";
//     cin >> num;

//     int temp = num;  
    
//     while (temp > 0) {
//         digit = temp % 10;     
//         sum += digit;         
//         product *= digit;      
//         temp /= 10;           
//     }

//     if (sum == product)
//         cout << num << " is a Spy Number." << endl;
//     else
//         cout << num << " is NOT a Spy Number." << endl;

//     return 0;
// }



// int main() {
//     int num, sum = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     int temp = num;

//     while (sum > 9 || temp > 0) {
//         if (temp == 0) {
//             temp = sum;
//             sum = 0;
//         }
//         sum += temp % 10;
//         temp /= 10;
//     }

//     if (sum == 1)
//         cout << num << " is a Magic Number." << endl;
//     else
//         cout << num << " is NOT a Magic Number." << endl;

//     return 0;
// }




// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     unordered_set<int> seen; 

//     while (num != 1 && seen.find(num) == seen.end()) {
//         seen.insert(num);
//         int sum = 0;
//         int temp = num;

//         while (temp > 0) {
//             int digit = temp % 10;
//             sum += digit * digit; 
//             temp /= 10;
//         }

//         num = sum;
//     }

//     if (num == 1)
//         cout << " is a Happy Number " << endl;
//     else
//         cout << " is Not a Happy Number " << endl;

//     return 0;
// }


bool isKaprekar(int n) {
    long long sq = (long long)n * n;  
    int d = 0, temp = n;
    
    // count digits in n
    while (temp > 0) {
        d++;
        temp /= 10;
    }

    // split square into two parts
    long long divisor = pow(10, d);
    long long right = sq % divisor;
    long long left = sq / divisor;

    return (left + right == n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isKaprekar(n))
        cout << n << " is a Kaprekar number.";
    else
        cout << n << " is not a Kaprekar number.";
    return 0;
}





