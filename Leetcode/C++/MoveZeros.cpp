#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=nums.size();
        while(i < j){
            if(nums[i] == 0){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }
    }
};


int main(){
    Solution s;
    vector<int> nums = {0,1,0,3,12};
    s.moveZeroes(nums);
    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}