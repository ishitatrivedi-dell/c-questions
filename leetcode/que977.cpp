#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;

        for(int x : nums){
            arr.push_back(x * x);
        }

        sort(arr.begin(), arr.end());

        return arr;
    }
};

int main() {
    int n;
    cin >> n;  // size of array

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.sortedSquares(nums);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}