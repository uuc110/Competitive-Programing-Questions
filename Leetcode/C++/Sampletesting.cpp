#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int count = 0;

        if(stones.size() == 0)
            return 0;
        for(int i=0; i< stones.size() ;i++){
            if(stones[i][0] == stones[i][1]){
                count++;
                stones.erase(stones.begin()+i);
                i--;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<vector<int>> stones = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
    cout << s.removeStones(stones) << endl;
    return 0;
}