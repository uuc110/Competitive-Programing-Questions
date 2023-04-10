#include <algorithm>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

class Solution {
public:
    int minimizeArrayValue(vector<int> &nums) {
        int res = nums[0];
        int total = res;

        for (int i = 1; i < nums.size(); ++i) {
            total += nums[i];
            //take higher value of precsion in
            // case of negative numbers
            int precision = ceil(total/ (i + 1.0));
            res = max(res, precision);
        }
        return res;
    }
};


int main(){
    Solution s;
    vector<int> nums = {3,7,1,6};
    auto result = s.minimizeArrayValue(nums);
    cout << result;
    return 0;
}