#include <iostream>

using namespace std;


int findLengthofstr(string str){

int count = 0;
for(int i = 0; i < str.length();i++){

    count++;
}
return count; 

}

int main(){
    string inputstring = "hello world!";
    cout << "length o the string is " << findLengthofstr(inputstring) << endl;

    return 0;
}


// m2


#include <iostream>
using namespace std;

int findLengthMethod(string str) {
    return str.length(); // Use the built-in length() method
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length (Using length()): " << findLengthMethod(inputString) << endl;
    return 0;
}


// m3


#include <iostream>
#include <iterator> 
using namespace std;

int findLengthIterators(string str) {
    return distance(str.begin(), str.end()); // Calculate distance between start and end iterators
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length (Using Iterators): " << findLengthIterators(inputString) << endl;
    return 0;
}