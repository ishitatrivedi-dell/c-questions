#include <iostream>
using namespace std;


void  findingPairs(int num [] , int n , int target){
        int findpair = false;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < i+1 ; j++){

                if(num[i] + num[j] == target){
                    cout << "[" << i << " , " << j << "]" << endl;
                    findpair = true;
                }


            }
        }

if (!findpair){
    cout << "No pair found with given sum" << endl;
}
}


int main (){

    int num[] = {1,2,3,4,5,6,7,};
    int n = sizeof(num) / sizeof(num[0]);
    int target = 9;


    cout << "pair with sum" << target << " : " << endl;
    findingPairs(num , n , target);

    return 0;
}