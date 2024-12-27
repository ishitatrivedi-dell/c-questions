#include <iostream>
#include <cctype>
using namespace std;

// string toUpperCaseASCII(string str) {
//     for (int i = 0; i < str.length(); i++) { 
//         if (str[i] >= 'a' && str[i] <= 'z') { 
//             str[i] = str[i] - 32; 
//         }
//     }
//     return str; 
// }

// int main() {
//     string input = "hello"; 
//     cout << "Uppercase (Brute Force): " << toUpperCaseASCII(input) << endl;
//     return 0;
// }




// method 2
string toUpperCaseASCII(string str) {

    for(int i =0; i < str.length(); i++){

        str[i] = toupper(str[i]);
    }
    return str;

}


int main(){
    string input = "hello";
    cout << "Uppercase (Using built-in function): " << toUpperCaseASCII(input) << endl;
    return 0;
}


// method 3



#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;    


string toUpperCase(string str){

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;

}

int main(){
    string str = "Hello World";
    cout << "Original String: " << str << endl;
    str = toUpperCase(str);
    cout << "Uppercase String: " << str << endl;
}