#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rtn = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
        };

        int sum = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (i > 0 && rtn[s[i]] > rtn[s[i - 1]]) {
                sum += rtn[s[i]] - 2 * rtn[s[i - 1]];
            } else {
                sum += rtn[s[i]];
            }
        }
        return sum;
    }
};

int main(){
    Solution s;
    string str;
    cin >> str;

    auto result = s.romanToInt(str);

    cout << result;
}