#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int ln = n[0];
        unsigned int k = 1;
        unsigned int si = n.size();
        for(unsigned int i=0; i < si; i++){
            if(n[i] == ln){
                continue;
            }else{
                ln = n[k] = n[i];
                k++;
            }
        }
        return k;
    }
};

void printVector(vector<int> nums){
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
}


int main(){
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << s.removeDuplicates(nums);
    cout << endl;
    printVector(nums);


    return 0;
}