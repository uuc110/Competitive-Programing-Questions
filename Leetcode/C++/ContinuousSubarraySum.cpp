class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int maxsum = 0;
        for(int i=0; i<nums.size(); i++){
            maxsum += nums[i];
            if(maxsum == k){
                return true;
            }
        }
    }
};