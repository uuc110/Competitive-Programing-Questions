#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& n, int val) {
        int count=0;
        for(int i=0; i< n.size();i++){
            if(n[i] != val){
                n[count] = n[i];
                count++;
            }
        }
        return count;
    }
};

 void print(vector<int> data){
         for(int i=0; i< data.size();i++){
             cout << data[i] << " ";
         }
         cout << endl;
     }

int main(){
    Solution s;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    auto result = s.removeElement(nums, val);
    print(nums);
    cout << result;


    return 0;
}