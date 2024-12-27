#include <iostream>
using namespace std;

void printLargestNumber(int number1, int number2) {
    if (number1 > number2) {
        cout << "The largest number is: " << number1 << endl;
    } else {
        cout << "The largest number is: " << number2 << endl;
    }
}

int main() {
    int number1 = 10; 
    int number2 = 20; 

   
    printLargestNumber(number1, number2);

    return 0;
}


// m2 


#include <iostream>
using namespace std;

void printLargestNumberTernary(int number1, int number2) {
    cout << "The largest number is: " << (number1 > number2 ? number1 : number2) << endl;
}

int main() {
    int number1 = 10; 
    int number2 = 20; 

    printLargestNumberTernary(number1, number2);

    return 0;
}


// m3

#include <iostream>
#include <algorithm> 
using namespace std;

void printLargestNumberMax(int number1, int number2) {
    cout << "The largest number is: " << max(number1, number2) << endl;
}

int main() {
    int number1 = 10;
    int number2 = 20;

    printLargestNumberMax(number1, number2);

    return 0;
}