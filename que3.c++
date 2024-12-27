#include <iostream>


using namespace std;

void CheckTriangleSides(int side1 , int side2 , int side3){
    if (side1 == side2){
        cout << "the triangle is equilateral" << endl;
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1 ){
        cout << "the triangle is isosecles" << endl ;
    }
    else{
        cout << "the triangle is sclene triangle ";
    }
}

int main() {
   int side1 , side2 , side3 ;
   
   cout << "Enter the first side of the triangle: "; 
    cin >> side1; 

    cout << "Enter the second side of the triangle: "; 
    std::cin >> side2;

    cout << "Enter the third side of the triangle: "; 
    cin >> side3; 

    CheckTriangleSides(side1, side2, side3); 
    return 0;

}