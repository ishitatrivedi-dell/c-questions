#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0 ;
        int right = nums.size() -1 ;

        while(left < right){
            if(nums[left] == nums[left + 1]){
                return true ;
            }
            left++;
        }
        return false ;
    }
};