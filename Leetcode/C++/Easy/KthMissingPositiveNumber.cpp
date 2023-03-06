/* Question No. & Title : 1539. Kth Missing Positive Number
 * Description : Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
 * Find the kth positive integer that is missing from this array.
 * Follow up :
 * Example 1 :
 * Example 2 :
 * Note : 
 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<bool> fullArray(arr.back()+1, true);
        for (int i = 0; i < arr.back(); ++i) {
            if(i < arr.size())
                fullArray[arr[i]] = false;
        }
        int count =0;
        int ans;
        for (int i = 0; i < arr.back(); ++i) {
            if(fullArray[i] == true){
                if(count==k){
                    ans = i;
                }
                count++;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,3,4};
    int result = s.findKthPositive(arr, 2);
    cout << result;
    return 0;


}