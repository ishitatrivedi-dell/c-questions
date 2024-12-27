#include <iostream> 
using namespace std; 

void sumEvenOdd(int num) {
    int evenSum = 0, oddSum = 0;
    
    while (num > 0) {  
        int digit = num % 10;  
        
       
        if (digit % 2 == 0) {  
            evenSum += digit;  
        } else {  
            oddSum += digit;  
        }
        
        num /= 10;  
    }
    
    cout << " even : " << evenSum << endl;  
    cout << " odd : " << oddSum << endl;  
}

int main() {
    int num;  
    cout << "Enter a number: ";
    cin >> num;  
    sumEvenOdd(num);  
    return 0;  
}