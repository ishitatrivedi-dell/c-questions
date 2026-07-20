class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> freq;
        long long  sum = 0 ;
        long long answer = 0 ;

        for(int i = 0 ; i < k ; i++){
            sum += nums[i];
            freq[nums[i]]++;
        }
        
        if(freq.size() == k){
            answer = sum ;
        }

        for(int i = k ; i < nums.size(); i++){
            sum -= nums[i-k];
            freq[nums[i-k]]-- ;

            if(freq[nums[i-k]] == 0){
                freq.erase(nums[i-k]);
            }

            sum += nums[i];
            freq[nums[i]]++ ;


            if(freq.size()== k){
                answer = max(answer,sum);
            }
        }


return answer ;

    }
};