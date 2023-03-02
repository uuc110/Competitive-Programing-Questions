#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0 , j =0;
        while(j < nums.size()){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};

int main(){
    vector<int> nums = {0,1,0,3,12};
    Solution s;
    s.moveZeroes(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }


    return 0;
}