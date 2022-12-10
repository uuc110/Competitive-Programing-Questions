#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int Minimum = min(nums[0], nums[nums.size()]);
        int Maximum = max(nums[0], nums[nums.size()]);
        int XOR =0;
        for(int i: nums){
           i = i
        }

    }
};


int main(){
    Solution s;
    vector<int> nums = {1,3,4,2,2};
    int ans = s.findDuplicate(nums);
    cout << ans << endl;


    return 0;
}