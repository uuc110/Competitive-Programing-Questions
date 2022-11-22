#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    /* Method 1 : Hashmap
    int MajorityElement (vector<int> &arr){
        int n = arr.size();
        int MaxLength = 0;
        int MajorityElemnet = n / 2;
        unordered_map<int, int>  mp;
        for (int x: arr) {
            mp[x]++;
        }

        for(auto &num : mp){
            if(num.second > n / 2){
                MaxLength = num.first;
            }
        }
        return MaxLength;
    } */

//    MEthod 2: Moore's Voting Algorithm
    int MajorityElement (vector<int> &arr){
        int count =0;
        int ele = 0;
        for(int i : arr){
            if( count == 0){
                ele = i;
                count++;
            }
            else{
                if(ele == i){
                    count++;
                }else{
                    count--;
                }
            }
        }
        return ele;
    }

};

int main(){
    Solution s;
    vector<int> arr = {3,2,3};
    cout << s.MajorityElement(arr);
    return 0;
}