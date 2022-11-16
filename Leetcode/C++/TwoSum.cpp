#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
            if (hash.count(target - nums[i]))
            {
                result.push_back(hash[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            else
                hash[nums[i]] = i;
        return result;
    }
};

int main(){

    Solution s;
    vector<int> nums = {3 ,2 ,4};
    int target = 6;
    vector<int> res = s.twoSum(nums, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}