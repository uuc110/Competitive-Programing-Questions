#include <bits/stdc++.h>
#include <functional>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> &c, int ex) {
        vector<bool> r;
        int m = 0;
        for(auto x: c){
            if(x > m){
                m = x;
            }
        }

        for(auto x: c){
            if(x + ex >= m){
                r.push_back(true);
            }else{
                r.push_back(false);
            }
        }
        return r;
    }
};



void print(vector<bool> data) {
    for (int i = 0; i < data.size(); i++) {
        if (data[i] == true) {
            cout << "true" << " ";
        } else {
            cout << "false" << " ";
        }
    }
    cout << endl;
}

int main() {
    Solution s;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extra = 3;
    print(s.kidsWithCandies(candies, extra));
    clock_t start = clock();
    std::ios::sync_with_stdio(false);
    //Code goes here//

    cout << "\n";
    cout << "Time taken: " << (double)(clock() - start) / (double)CLOCKS_PER_SEC << " \n";

    return 0;
}