#include <iostream>
using namespace std;

// Function to concatenate two strings manually
string concatenateManual(string str1, string str2) {
    for (int i = 0; i < str2.length(); i++) { // Iterate over each character of the second string
        str1 += str2[i]; // Append the character to the first string
    }
    return str1; // Return the concatenated string
}

int main() {
    string str1 = "hello";  // First string
    string str2 = " world"; // Second string
    cout << "Concatenated String (Brute Force): " << concatenateManual(str1, str2) << endl;
    return 0;
}

// m2 


#include <iostream>
using namespace std;

string concatenateWithPlus(string str1, string str2) {
    return str1 + str2; 
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated String (Using +): " << concatenateWithPlus(str1, str2) << endl;
    return 0;
}