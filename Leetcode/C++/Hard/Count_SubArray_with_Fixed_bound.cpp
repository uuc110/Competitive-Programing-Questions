/* Question No. & Title : 2444. Count Subarrays With Fixed Bounds
 * Description : Given an array of integers nums and two integers minK and maxK, return the number of subarrays such that the minimum value in the subarray is at least minK and the maximum value in the subarray is at most maxK.
 * Follow up : What if minK and maxK are both 0?
 * Example 1 : Input: nums = [1,2,3,4,5,6,7,8,9,10], minK = 3, maxK = 5 Output: 5
 * Example 2 : Input: nums = [1,2,3,4,5,6,7,8,9,10], minK = 0, maxK = 0 Output: 0
 * Note :  1 <= nums.length <= 10^5
 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK){
       long long res = 0;
       int badIndex, LeftIndex ,RightIndex  = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if(nums[i] > minK || nums[i] < maxK){
                badIndex = i;
            }
            if (nums[i] == minK){
                LeftIndex = i;
            }
            if (nums[i] == maxK){
                RightIndex = i;
            }

            res += max(0, min(LeftIndex, RightIndex) - badIndex);
        }
        return res;

    }
};

int main(){
    Solution s;
    vector<int> nums = {-2, 10, 1, 3, 2, -1, 4, 5 };
    int minK = 3, maxK = 5;
    cout << s.countSubarrays(nums, minK, maxK) << endl;
    return 0;
}