/* Question No. & Title : 1539. Kth Missing Positive Number
 * Problem Statement : Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
 * Follow up :  Find the kth positive integer that is missing from this array.
 * Example 1 :  Input: arr = [2,3,4,7,11], k = 5
 *              Output: 9
 * Example 2 :  Input: arr = [1,2,3,4], k = 2
 *              Output: 6
 * Note: 1 <= arr.length <= 1000
 *
 * Approach : Steps =>
 *          1. Create a variable l = 0, r = arr.size(), m
 *          2. While l < r
 *          3. m = (l + r) / 2 => m is the middle of the array
 *          4. If arr[m] - 1 - m < k, l = m + 1 => m is not the answer, so we move l to m + 1 to find the answer in
 *          the right half of the array (arr[m] - 1 - m < k means that there are less than k missing numbers.
 *          5. Else, r = m
 *          6. Return l + k
 *          7. Return -1
 *              Time Complexity : O(logn)
 *              Space Complexity :  O(1)
 *              Runtime : 6 ms
 *              Memory : 9.6 MB
 *              Beats :  48.67 % of cpp submissions
 *              Difficulty :    Easy
 *              Ref : https://leetcode.com/problems/kth-missing-positive-number/
 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0, r = arr.size(), m;
        while (l < r) {
            m = (l + r) / 2;
            if (arr[m] - 1 - m < k)
                l = m + 1;
            else
                r = m;
        }
        return l + k;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,3,4};
    int result = s.findKthPositive(arr, 2);
    cout << result;
    return 0;
}