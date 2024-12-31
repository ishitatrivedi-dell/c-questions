#include <iostream>
#include <string>
using namespace std;

string getFileExtensionBruteForce(string filename) {
    int pos = filename.rfind('.'); // Find the last occurrence of '.'
    cout << "pos = " << pos << endl; // Debug information
    
    if (pos == string::npos) { // If no '.' found
        return ""; // Return an empty string
    }
    
    return filename.substr(pos + 1); // Return the substring after the '.'
}

int main() {
    string filename = "document.pdf"; // Example file name

    cout << "File Extension (Brute Force): " 
         << getFileExtensionBruteForce(filename) << endl;

    return 0;
}




// m-2


#include <iostream>
#include <string>
using namespace std;

// Function to extract the file extension using find_last_of
string getFileExtensionEasy(string filename) {
    // Find the position of the last period (.)
    size_t pos = filename.find_last_of('.');
    
    // Check if a period is found and it's not the first character of the string
    if (pos != string::npos && pos != 0) {
        // Extract and return the file extension
        return filename.substr(pos + 1);  // Substring after the period
    }
    return "";  // Return empty string if no period is found
}

int main() {
    string filename = "document.pdf";  // Example filename

    // Output the extracted file extension
    cout << "File Extension (Easy Approach): " << getFileExtensionEasy(filename) << endl;

    return 0;
}