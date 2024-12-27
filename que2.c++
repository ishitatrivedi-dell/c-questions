#include<iostream>


using namespace std;

void CheckSign(int num) {
    // Function to determine the grade based on the score
    if (num < 0){
        cout << "the number is negative" << endl;
        
    }
    else if (num > 0){
        cout << "the number is positive" << endl;
    }
    else {
        cout << "the number is zero " << endl;
    }
}

int main() {
   
int num;
    cout << "enter a number ";
    cin >> num;
    CheckSign(num);
  

    return 0;
}