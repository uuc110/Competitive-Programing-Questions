/* Question No. & Title : 912. Sort an Array
 * Problem Statement : Given an array of integers nums, sort the array in ascending order.
 * Follow up :  Can you sort the array in O(n log(n)) time and O(1) memory (i.e. constant space)?
 * Example 1 :  Input:  nums = [5,2,3,1]
 *              Output: [1,2,3,5]
 * Example 2 :  Input:  nums = [5,1,1,2,0,0]
 *              Output: [0,0,1,1,2,5]
 * Note: 1 <= nums.length <= 50000
 *
 * Approach : Steps =>
 *             1. Divide the array into two halves
 *             2. Sort the two halves
 *             3. Merge the two halves
 *             4. Return the sorted array
 *
 *              Time Complexity : O(nlogn)
 *              Space Complexity : O(n)
 *              Runtime : 266ms
 *              Memory : 68.8mb
 *              Beats : 39.60%
 *              Difficulty : Medium
 *              Ref : https://www.youtube.com/watch?v=ZRPoEKHXTJg
 *
 */

#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
    void conquer(vector<int> &arr, int start, int mid, int ending, vector<int>& tempArr){

        int index1 = start;
        int index2 = mid +1;
        int x = 0;

        while(index1 <= mid && index2 <= ending){
            if(arr[index1] <= arr[index2]){
                tempArr[x++] = arr[index1++];
            }else{
                tempArr[x++] = arr[index2++];
            }
        }

        while(index1 <= mid){
            tempArr[x++] = arr[index1++];
        }

        while(index2<=ending){
            tempArr[x++] = arr[index2++];
        }

        for(int i = 0; i < x; i++){
            arr[start+i] = tempArr[i];
        }
    }

    void divide(vector<int> &arr, int start, int ending, vector<int>& temparr){
        if(start >= ending) return;
        int mid = start + (ending - start) / 2;

        divide(arr, start, mid,temparr);
        divide(arr, mid+1, ending, temparr);
        conquer(arr, start, mid, ending,temparr);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int> TempArrr(nums.size());
        divide(nums, 0, nums.size()-1, TempArrr);
        return nums;
    }
};

int main(){
    Solution S;
    vector<int> arr = {5,2,3,1};
    vector<int> result = S.sortArray(arr);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}
