#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int GoodPair(vector<int> Arr){
        int NumPair = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < Arr.size(); ++i) {
            for (int j = 0; j < Arr.size(); ++j) {
                if(Arr[i] == Arr[j]){
                    map[i,j]++;
                }
            }
        }
        NumPair = map.size();
        return NumPair;
    }
};

int main(){
    Solution s;
    vector<int> arr{1,2,3,1,1,3};
    cout << s.GoodPair(arr);

    return 0;
}