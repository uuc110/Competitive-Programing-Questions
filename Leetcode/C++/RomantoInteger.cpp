#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int romanToInt(string str) {
        unordered_map<char, int> RomanToInt = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
        };

        int sum = 0;
        for (int i = 0; i < str.length(); i++) {
//            if (i > 0 && RomanToInt[str[i]] > RomanToInt[str[i - 1]]) {
//                sum += RomanToInt[str[i]] - 2 * RomanToInt[str[i - 1]];
//            } else {
                sum += RomanToInt[str[i]];
//            }

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