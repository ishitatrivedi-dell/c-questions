#include <iostream>
#include <cctype> 
#include <algorithm>
using namespace std;

string trimManual(string str) {
    int start = 0, end = str.length() - 1;

    while (start <= end && isspace(str[start])) {
        start++;
    }

    while (end >= start && isspace(str[end])) {
        end--;
    }

    return str.substr(start, end - start + 1);
}
int main() {
    string input = "   hello   ";
    cout << "Trimmed String (Manual): \"" << trimManual(input) << "\"" << endl;
    return 0;
}


// m2

// by using alogrithm for isspace()

string trimUsingErase(string str) {
 
    str.erase(str.begin(), find_if(str.begin(), str.end(), [](unsigned char ch) { return !isspace(ch); }));

    str.erase(find_if(str.rbegin(), str.rend(), [](unsigned char ch) { return !isspace(ch); }).base(), str.end());

    return str;
}

int main() {
    string input = "   hello   ";
    cout << "Trimmed String (Using erase()): \"" << trimUsingErase(input) << "\"" << endl;
    return 0;
}