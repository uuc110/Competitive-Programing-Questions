#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        vector<int> lastSeen(26, -1);
        int count = 1, substringStart = 0;

        for (int i = 0; i < s.length(); i++) {
            if (lastSeen[s[i] - 'a'] >= substringStart) {
                count++;
                substringStart = i;
            }
            lastSeen[s[i] - 'a'] = i;
        }

        return count;
    }
};

int main(){
    Solution s;
    string str = "ababcbacadefegdehijhklij";
    auto result = s.partitionString(str);
    cout << result;

    return 0;
}